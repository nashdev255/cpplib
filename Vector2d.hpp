/**
 * @name Vector2d.hpp
 * @author nashdev255
 * @version 0.0.1
*/

#ifndef VECTOR2D_HPP
#define VECTOR2D_HPP

#include <ostream>

class Vector2d {
  private:
    double x, y;
  
  public:
    Vector2d(double x = 0, double y = 0) : x(x), y(y) {};
    friend std::ostream& operator<<(std::ostream& os, const Vector2d& v);

    Vector2d operator++() {
      x++; y++;
      return *this;
    }
    Vector2d operator++(int dummy) {
      Vector2d v = *this;
      x++; y++;
      return v;
    }
    Vector2d operator--() {
      x--; y--;
      return *this;
    }
    Vector2d operator--(int dummy) {
      Vector2d v = *this;
      x--; y--;
      return v;
    }

    Vector2d operator+(const Vector2d& v) { return Vector2d(x + v.x, y + v.y); }
    int operator*(const Vector2d& v) { return x * v.x + y * v.y; }

    Vector2d operator+() { return Vector2d(x, y); }
    Vector2d operator-() { return Vector2d(-x, -y); }
};

std::ostream& operator<<(std::ostream& os, const Vector2d& v) {
  os << '(' << v.x << ',' << v.y << ')';
  return os;
}

#endif
