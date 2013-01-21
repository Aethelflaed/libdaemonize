/**
 * Daemonizer
 * Author:		Geoffroy Planquart <geoffroy@aethelflaed.com>
 * Created:		January 20 2013
 * Last Change:	January 21 2013
 */

#ifndef _DAEMONIZER_HPP
#define _DAEMONIZER_HPP

#include "logger.hpp"
#include "daemon_t.hpp"

class daemonizer
{
	public:
		daemonizer(const char* name, daemon_t& daemon);
		~daemonizer();

	private:
		logger log;
};

#endif /* _DAEMONIZER_HPP */


