#ifndef MAIN_CPP
#define MAIN_CPP

#include <iostream>
#include "Vector2d.hpp"

int main(int numberOfArgs, char* argv[]) {
  Vector2d v1(1, 2);
  Vector2d v2(3, 4);
  Vector2d v;

  v = +v1;

  std::cout << v << std::endl;

  return 0;
}

#endif
