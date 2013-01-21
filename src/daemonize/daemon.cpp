/**
 * daemon
 * Author:		Geoffroy Planquart <geoffroy@aethelflaed.com>
 * Created:		January 20 2013
 * Last Change:	January 21 2013
 */

#include "daemon.hpp"

using namespace daemonize;

daemon::daemon()
	:log(0)
{
}

daemon::~daemon()
{
	if (log != 0)
	{
		log->info("Destructing daemon base class");
	}
}

logger* daemon::get_log()
{
	return this->log;
}

void daemon::set_log(logger* log)
{
	this->log = log;
}

