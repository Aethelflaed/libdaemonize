/**
 * daemon
 * Author:		Geoffroy Planquart <geoffroy@aethelflaed.com>
 * Created:		January 20 2013
 * Last Change:	January 21 2013
 */

#include "daemon.hpp"

using namespace daemonize;

daemon::daemon(logger& log)
	:log(log)
{
}

daemon::~daemon()
{
	log << logger::notice << "Destructing daemon base class" << std::endl;
}

logger& daemon::get_log()
{
	return log;
}

