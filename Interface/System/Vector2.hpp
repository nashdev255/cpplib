/**
 * @name Vector2d.hpp
 * @author nashdev255
 * @version 0.0.1
*/

#ifndef VECTOR2_HPP
#define VECTOR2_HPP

#include <ostream>

template <typename T>
class Vector2 {
  private:
    T x, y;
  
  public:
    Vector2(T x = 0, T y = 0) : x(x), y(y) {};
    friend std::ostream& operator<<(std::ostream& os, const Vector2<T>& v);

    Vector2<T> operator*(const T i) { return Vector2<T>(i * x, i * y); }
    friend Vector2<T> operator*(const T i, const Vector2<T>& v) { return Vector2<T>(i * v.x, i * v.y); }

    Vector2<T> operator++() {
      x++; y++;
      return *this;
    }
    Vector2<T> operator++(const int dummy) {
      Vector2<T> v = *this;
      x++; y++;
      return v;
    }
    Vector2<T> operator--() {
      x--; y--;
      return *this;
    }
    Vector2<T> operator--(const int dummy) {
      Vector2<T> v = *this;
      x--; y--;
      return v;
    }

    Vector2<T> operator+(const Vector2<T>& v) { return Vector2<T>(x + v.x, y + v.y); }
    int operator*(const Vector2<T>& v) { return x * v.x + y * v.y; }

    Vector2<T> operator+() { return Vector2<T>(x, y); }
    Vector2<T> operator-() { return Vector2<T>(-x, -y); }
};

template <typename T>
std::ostream& operator<<(std::ostream& os, const Vector2<T>& v) {
  os << '(' << v.x << ',' << v.y << ')';
  return os;
}

#endif
