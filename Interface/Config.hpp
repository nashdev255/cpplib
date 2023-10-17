#ifndef CONFIG_HPP
#define CONFIG_HPP

#define NASH_VERSION_MAJOR  0
#define NASH_VERSION_MINOR  0
#define NASH_VERSION_PATCH  1
#define NASH_VERSION_IS_RELEASE false

/**
 * Identify the operating system
*/
#if defined(_WIN32)
#define NASH_SYSTEM_WINDOWS
#ifndef NOMINMAX
#endif
#elif defined(__APPLE__) && defined(__MACH__)

#endif

#endif
