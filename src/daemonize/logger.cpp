/**
 * logger
 * Author:		Geoffroy Planquart <geoffroy@aethelflaed.com>
 * Created:		January 19 2013
 * Last Change:	January 21 2013
 */

#include "logger.hpp"

using namespace daemonize;

logger::priority_t logger::emerge	(0);
logger::priority_t logger::alert	(1);
logger::priority_t logger::critical	(2);
logger::priority_t logger::error	(3);
logger::priority_t logger::warning	(4);
logger::priority_t logger::notice	(5);
logger::priority_t logger::info		(6);
logger::priority_t logger::debug	(7);

logger::logger(std::streambuf* buf)
	:std::ostream(buf)
{
}

logger::~logger()
{
}

logger& logger::operator<<(logger::priority_t prio)
{
	priority(prio._priority);
	return *this;
}

int logger::priority()
{
	return _priority;
}
void logger::priority(int opts)
{
	_priority = opts;
}

