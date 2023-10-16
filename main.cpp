#ifndef MAIN_CPP
#define MAIN_CPP

#include <iostream>
#include "Vector2d.hpp"

int main(int numberOfArgs, char* argv[]) {
  Vector2d v1(1, 2);
  Vector2d v2(3, 4);
  Vector2d v;

  v1++;
  v = 2 * v1 + (-v2) * (+v1 * v2);
  v--;

  std::cout << v << std::endl;

  return 0;
}

#endif
/*
(2, 3)
(4, 6) - (3, 4) * 18
(4, 6) - (54, 72)
(-50, -66)
(-51, -67)
*/
