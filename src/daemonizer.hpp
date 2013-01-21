/**
 * daemonizer
 * Author:		Geoffroy Planquart <geoffroy@aethelflaed.com>
 * Created:		January 20 2013
 * Last Change:	January 21 2013
 */

#ifndef __DAEMONIZER_DAEMONIZER_HPP
#define __DAEMONIZER_DAEMONIZER_HPP

#include "logger.hpp"
#include "daemon.hpp"

namespace daemonizer
{
	class daemonizer
	{
		public:
			daemonizer(const char* identity, daemonizer::daemon& daemon);
			~daemonizer();

		private:
			daemonizer::logger log;
	};
}

#endif /* __DAEMONIZER_DAEMONIZER_HPP */


