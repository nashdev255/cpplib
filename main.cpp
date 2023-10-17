#ifndef MAIN_CPP
#define MAIN_CPP

#include <iostream>
#include "Interface/System/Vector2.hpp"

int main(int numberOfArgs, char* argv[]) {
  Vector2<double> v1(1, 2);
  Vector2<double> v2(1, 2);
  Vector2<double> v;

  std::cout << (v1 == v2) << std::endl;

  return 0;
}

#endif
