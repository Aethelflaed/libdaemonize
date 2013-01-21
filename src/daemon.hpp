/**
 * daemon
 * Author:		Geoffroy Planquart <geoffroy@aethelflaed.com>
 * Created:		January 20 2013
 * Last Change:	January 21 2013
 */

#ifndef __DAEMONIZER_DAEMON_HPP
#define __DAEMONIZER_DAEMON_HPP

#include "logger.hpp"

namespace daemonizer
{
	class daemon_t
	{
		public:
			daemon_t();
			virtual ~daemon_t();

			virtual void run() = 0;

			daemonizer::logger* get_log();
			void set_log(daemonizer::logger* log);

		protected:
			daemonizer::logger* log;

	};
}

#endif /* __DAEMONIZER_DAEMON_HPP */

