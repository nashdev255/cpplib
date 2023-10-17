#ifndef TIME_HPP
#define TIME_HPP

#include <Interface/System/Export.hpp>

#include <chrono>
#include <ratio>

#include <cassert>
#include <cstdint>

class Time {
  public:
    template <typename Rep, typename Period>
    Time(const std::chrono::duration<Rep, Period>& duration);
    
};

#endif
