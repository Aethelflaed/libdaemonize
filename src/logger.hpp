/**
 * logger
 * Author:		Geoffroy Planquart <geoffroy@aethelflaed.com>
 * Created:		January 19 2013
 * Last Change:	January 21 2013
 */

#ifndef __DAEMONIZER_LOGGER_HPP
#define __DAEMONIZER_LOGGER_HPP

// This activates vsyslog in syslog.h
#ifndef __USE_BSD
#	define __USE_BSD
#endif

#include <syslog.h>

namespace daemonizer
{
	class logger
	{
		public:
			logger(const char* identity,
					int logmask = 0,
					int option = LOG_CONS | LOG_PID | LOG_NDELAY,
					int facility = LOG_LOCAL0);
			virtual ~logger();

			void emerge(const char* message, ...) const
				__attribute__((__format__(__printf__, 2, 3)));
			void alert(const char* message, ...) const
				__attribute__((__format__(__printf__, 2, 3)));
			void critical(const char* message, ...) const
				__attribute__((__format__(__printf__, 2, 3)));
			void error(const char* message, ...) const
				__attribute__((__format__(__printf__, 2, 3)));
			void warning(const char* message, ...) const
				__attribute__((__format__(__printf__, 2, 3)));
			void notice(const char* message, ...) const
				__attribute__((__format__(__printf__, 2, 3)));
			void info(const char* message, ...) const
				__attribute__((__format__(__printf__, 2, 3)));
			void debug(const char* message, ...) const
				__attribute__((__format__(__printf__, 2, 3)));
	};
}

#endif /* __DAEMONIZER_LOGGER_HPP */

