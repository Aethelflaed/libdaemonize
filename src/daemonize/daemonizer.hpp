/**
 * daemonizer
 * Author:		Geoffroy Planquart <geoffroy@aethelflaed.com>
 * Created:		January 20 2013
 * Last Change:	January 21 2013
 */

#ifndef __DAEMONIZE_DAEMONIZER_HPP
#define __DAEMONIZE_DAEMONIZER_HPP

#include <daemonize/logger.hpp>
#include <daemonize/daemon.hpp>

namespace daemonize
{
	void daemonizer(daemonize::daemon& daemon);
}

#endif /* __DAEMONIZE_DAEMONIZER_HPP */


