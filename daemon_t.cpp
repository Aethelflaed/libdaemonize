/**
 * daemon
 * Author:		Geoffroy Planquart <geoffroy@aethelflaed.com>
 * Created:		January 20 2013
 * Last Change:	January 20 2013
 */

#include "daemon_t.hpp"

daemon_t::daemon_t()
	:log(nullptr)
{
}

daemon_t::~daemon_t()
{
	if (log != nullptr)
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

