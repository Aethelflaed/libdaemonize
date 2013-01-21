/**
 * Logger
 * Author:		Geoffroy Planquart <geoffroy@aethelflaed.com>
 * Created:		January 19 2013
 * Last Change:	January 20 2013
 */

#include "logger.hpp"
#include <cstdarg>

#ifndef __USE_BSD
#	define __USE_BSD
#endif

#include <syslog.h>

logger::logger(const char* identity)
{
	/* The setlogmask() function sets the log priority mask for the current
	 * process to maskpri and returns the previous mask. If the maskpri
	 * argument is 0, the current log mask is not modified. Calls by the
	 * current process to syslog() with a priority not set in maskpri are
	 * rejected. The default log mask allows all priorities to be logged.
	 * A call to openlog is not required prior to calling setlogmask().
	 */
	setlogmask(0);

	openlog(identity, LOG_CONS | LOG_PID | LOG_NDELAY, LOG_LOCAL0);

	this->debug("Constructing logger");
}

logger::~logger()
{
	this->debug("Destructing logger");
	closelog();
}

void logger::emerge(const char* message, ...) const
{
	va_list vl;
	va_start(vl, message);
	vsyslog(LOG_EMERG, message, vl);
	va_end(vl);
}

void logger::alert(const char* message, ...) const
{
	va_list vl;
	va_start(vl, message);
	vsyslog(LOG_ALERT, message, vl);
	va_end(vl);
}

void logger::critical(const char* message, ...) const
{
	va_list vl;
	va_start(vl, message);
	vsyslog(LOG_CRIT, message, vl);
	va_end(vl);
}

void logger::error(const char* message, ...) const
{
	va_list vl;
	va_start(vl, message);
	vsyslog(LOG_ERR, message, vl);
	va_end(vl);
}

void logger::warning(const char* message, ...) const
{
	va_list vl;
	va_start(vl, message);
	vsyslog(LOG_WARNING, message, vl);
	va_end(vl);
}

void logger::notice(const char* message, ...) const
{
	va_list vl;
	va_start(vl, message);
	vsyslog(LOG_NOTICE, message, vl);
	va_end(vl);
}

void logger::info(const char* message, ...) const
{
	va_list vl;
	va_start(vl, message);
	vsyslog(LOG_INFO, message, vl);
	va_end(vl);
}

void logger::debug(const char* message, ...) const
{
	va_list vl;
	va_start(vl, message);
	vsyslog(LOG_DEBUG, message, vl);
	va_end(vl);
}

