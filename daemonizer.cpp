/**
 * Daemonizer
 * Author:		Geoffroy Planquart <geoffroy@aethelflaed.com>
 * Created:		January 20 2013
 * Last Change:	January 20 2013
 */

#include "daemonizer.hpp"

#include <cstdio>
#include <cstdlib>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <errno.h>

daemonizer::daemonizer(const char* name, daemon_t* daemon)
	:log(name), daemon(daemon)
{
	log.notice("Starting...");

	/* Fork off the parent process */
	pid_t pid = fork();	// child process get 0 as return value
	if (pid < 0)
	{
		log.error("Unable to fork off the parent process: %m");
		throw EXIT_FAILURE;
	}
	/* If we got a good PID, then
	 * we can exit the parent process. */
	if (pid > 0)
	{
		log.debug("Exiting parent process");
		throw EXIT_SUCCESS;
	}

	log.debug("Change file mode umask to 0");
	umask(0);

	log.debug("Create a new SID for the child process");
	pid_t sid = setsid();
	if (sid < 0)
	{
		log.error("Unable to create a new SID for the child process: %m");
		throw EXIT_FAILURE;
	}

	log.debug("Change current working directory");
	if ((chdir("/")) < 0)
	{
		log.error("Unable to change the current working directory: %m");
		throw EXIT_FAILURE;
	}

	log.debug("Closing standard file descriptor STDIN");
	if (close(STDIN_FILENO) < 0)
	{
		log.error("Unable to close standard file descriptor STDIN: %m");
		throw EXIT_FAILURE;
	}
	log.debug("Closing standard file descriptor STDOUT");
	if (close(STDOUT_FILENO) < 0)
	{
		log.error("Unable to close standard file descriptor STDOUT: %m");
		throw EXIT_FAILURE;
	}
	log.debug("Closing standard file descriptor STDERR");
	if (close(STDERR_FILENO) < 0)
	{
		log.error("Unable to close standard file descriptor STDERR: %m");
		throw EXIT_FAILURE;
	}

	log.debug("Setting the daemon log");
	this->daemon->set_log(&log);
	log.notice("Launching daemon");
	this->daemon->run();
}

daemonizer::~daemonizer()
{
	log.notice("Exiting...");
}

