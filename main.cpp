#define IS_DEBUG 0

#include <iostream>
#include "Vector2.h"

int main(int argc, char* argv[]) {
  #if IS_DEBUG
  nash::Vector2d vec2d = new nash::Vector2d{1, 2};
  std::cout << vec2d << std::endl;
  #endif
  return 0;
}
