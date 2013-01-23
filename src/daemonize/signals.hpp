/**
 * signals
 * Author:		Geoffroy Planquart <geoffroy@aethelflaed.com>
 * Created:		January 23 2013
 * Last Change:	January 23 2013
 */

#ifndef __DAEMONIZE_SIGNALS_HPP
#define __DAEMONIZE_SIGNALS_HPP

#include <daemonize/logger.hpp>

namespace daemonize
{
	namespace signals
	{
		void enable(daemonize::logger*);
		void disable();

		void handler(int signal);
	}
}

#endif /* __DAEMONIZE_SIGNALS_HPP */

