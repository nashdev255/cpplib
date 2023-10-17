#ifndef EXPORT_HPP
#define EXPORT_HPP

#include <Interface/Config.hpp>

#if defined(NASH_SYSTEM_EXPORTS)
#define NASH_SYSTEM_API NASH_API_EXPORT

#else
#define NASH_SYSTEM_API NASH_API_IMPORT

#endif

#endif
