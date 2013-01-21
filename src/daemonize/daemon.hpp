/**
 * daemon
 * Author:		Geoffroy Planquart <geoffroy@aethelflaed.com>
 * Created:		January 20 2013
 * Last Change:	January 21 2013
 */

#ifndef __DAEMONIZE_DAEMON_HPP
#define __DAEMONIZE_DAEMON_HPP

#include "logger.hpp"

namespace daemonize
{
	class daemon
	{
		public:
			daemon(daemonize::logger& log);
			virtual ~daemon();

			virtual void run() = 0;

			daemonize::logger& get_log();

		protected:
			daemonize::logger& log;
	};
}

#endif /* __DAEMONIZE_DAEMON_HPP */

