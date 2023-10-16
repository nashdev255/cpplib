#ifndef VECTOR2D_HPP
#define VECTOR2D_HPP

#include <ostream>

class Vector2d {
  private:
    double x, y;
  
  public:
    Vector2d(double x = 0, double y = 0) : x(x), y(y) {};
    friend std::ostream& operator<<(std::ostream& os, const Vector2d& v);
};

std::ostream& operator<<(std::ostream& os, const Vector2d& v) {
  os << '(' << v.x << ',' << v.y << ')';
  return os;
}

#endif
