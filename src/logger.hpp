/**
 * Logger
 * Author:		Geoffroy Planquart <geoffroy@aethelflaed.com>
 * Created:		January 19 2013
 * Last Change:	January 20 2013
 */

#ifndef _LOGGER_HPP
#define _LOGGER_HPP

class logger
{
	public:
		logger(const char* identity);
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

#endif /* _LOGGER_HPP */

