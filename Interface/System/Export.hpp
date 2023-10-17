#ifndef EXPORT_HPP
#define EXPORT_HPP

#include <Interface/Config.hpp>

#if defined(NASH_WINDOW_EXPORTS)
#define NASH_WINDOW_API NASH_API_EXPORT

#else
#define NASH_WINDOW_API NASH_API_IMPORT

#endif

#endif
