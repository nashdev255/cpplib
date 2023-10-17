#ifndef MAIN_CPP
#define MAIN_CPP

#include <iostream>
#include "Interface/System/Vector2.hpp"

int main(int numberOfArgs, char* argv[]) {
  Vector2<double> v1(1, 2);
  Vector2<double> v2(3, 4);
  Vector2<double> v;

  v1 += v2;

  std::cout << v1 << std::endl;
  std::cout << v2 << std::endl;

  return 0;
}

#endif
