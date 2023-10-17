#ifndef MAIN_CPP
#define MAIN_CPP

#include <iostream>
#include "Interface/System/Vector2.hpp"

int main(int numberOfArgs, char* argv[]) {
  Vector2<double> v1(2.5, 2);
  Vector2<double> v2(2.5, 4);
  Vector2<double> v;

  v1++;
  v = 2 * v1 + (-v2) * (+v1 * v2);
  v--;

  std::cout << v << std::endl;

  return 0;
}

#endif
