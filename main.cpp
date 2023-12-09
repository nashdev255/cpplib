#define IS_DEBUG 0

#include <iostream>
#include "Vector2.h"

int main(int argc, char* argv[]) {
  std::cout << nash::Vector2i(2, 3) << std::endl;
  #if IS_DEBUG
  nash::Vector2d vec2d(1.5, 2.3);
  nash::Vector2i vec2i;
  vec2i = static_cast<nash::Vector2i>(vec2d);
  std::cout << vec2i << std::endl;
  #endif
  return 0;
}
