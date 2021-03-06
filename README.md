# libdeamonizer


A lightweight library to easily create daemon in C++.

You deamon should simply inherit `daemonize::daemon` and put it's starting point in the `run` method.
You can get the log object from your daemon, and anything you write to it will be send to syslog.

## Usage

An example main could look like:

```c++

#include <libdaemonize/daemonizer.hpp>
#include <libdaemonize/syslog.hpp>

int main(int argc, const char** argv)
{
  try
	{
		daemonize::syslog syslog("my_daemon");
		my_daemon d(syslog);
		daemonize::daemonizer(d);
	}
	catch(int status)
	{
		return status;
	}
	catch(...)
	{
		return EXIT_FAILURE;
	}

	return EXIT_SUCCESS;
}
```

## Installation

Libdaemonize is still under development, so you'll need libtool, autoconf and automake to create the install script.

```sh
libtoolize
aclocal
autoconf
automake --add-missing
```

Then configure, build and install the library:

```sh
./configure --prefix=/usr
make
make install
```

## ToDo

- Handle signals
- Write tests

Already done:
- Add stream behavior to logger (`operator<<`), with a configurable priority.
- Handle `daemonize::logger` constructor parameters in `daemonizer` initialization.
