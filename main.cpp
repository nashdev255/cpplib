#ifndef MAIN_CPP
#define MAIN_CPP

#include <iostream>
#include "Interface/System/Vector2.hpp"

int main(int numberOfArgs, char* argv[]) {
  Vector2d v1(1, 2);
  Vector2d v2(2, 3);
  Vector2d v;

  std::cout << (v1 != v2) << std::endl;

  return 0;
}

#endif
