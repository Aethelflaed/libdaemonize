/**
 * daemon
 * Author:		Geoffroy Planquart <geoffroy@aethelflaed.com>
 * Created:		January 20 2013
 * Last Change:	January 21 2013
 */

#include "daemon.hpp"

using namespace daemonizer;

daemon_t::daemon_t()
	:log(0)
{
}

daemon_t::~daemon_t()
{
	if (log != 0)
	{
		log->info("Destructing daemon base class");
	}
}

logger* daemon_t::get_log()
{
	return this->log;
}

void daemon_t::set_log(logger* log)
{
	this->log = log;
}

