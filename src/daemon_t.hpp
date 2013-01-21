/**
 * daemon
 * Author:		Geoffroy Planquart <geoffroy@aethelflaed.com>
 * Created:		January 20 2013
 * Last Change:	January 20 2013
 */

#ifndef __DAEMON_HPP
#define __DAEMON_HPP

#include "logger.hpp"

class daemon_t
{
	public:
		daemon_t();
		virtual ~daemon_t();

		virtual void run() = 0;

		logger* get_log();
		void set_log(logger* log);

	protected:
		logger* log;

};

#endif /* __DAEMON_HPP */

