/**
 * daemonizer
 * Author:		Geoffroy Planquart <geoffroy@aethelflaed.com>
 * Created:		January 20 2013
 * Last Change:	January 21 2013
 */

#ifndef __DAEMONIZE_DAEMONIZER_HPP
#define __DAEMONIZE_DAEMONIZER_HPP

#include "logger.hpp"
#include "daemon.hpp"

namespace daemonize
{
	class daemonizer
	{
		public:
			daemonizer(const char* identity, daemonize::daemon& daemon);
			~daemonizer();

		private:
			daemonize::logger log;
	};
}

#endif /* __DAEMONIZE_DAEMONIZER_HPP */


