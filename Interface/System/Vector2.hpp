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
    /* xUnit and yUnit */
    T x, y;
  
  public:
    Vector2(T x = 0, T y = 0) : x(x), y(y) {};

    /**
     * Print Vector to command line in the form of (x, y).
     * 
     * [usege]
     * std::cout << Vector2<int>(1, 3) << std::endl; // (1, 3)
     * 
    */
    friend std::ostream& operator<<(std::ostream& os, const Vector2<T>& v) {
      os << '(' << v.x << ',' << v.y << ')';
      return os;
    }

    /**
     * For manipulating vector * number.
     * 
     * [usage]
     * Vector<int> v = Vector<int>(1, 3) * 2;
     * std::cout << v << std::endl; // (2, 6)
     * 
    */
    Vector2<T> operator*(const T i) { return Vector2<T>(i * x, i * y); }

    /**
     * For manipulating number * vector.
     * 
     * [usage]
     * Vector<int> v = 2 * Vector<int>(1, 3);
     * std::cout << 2 * Vector<int>(1, 3) << std::endl;
     * 
    */
    friend Vector2<T> operator*(const T i, const Vector2<T>& v) { return Vector2<T>(i * v.x, i * v.y); }

    /**
     * Prefix increment
     * 
     * [usage]
     * Vector<int> v(1, 3);
     * Vector<int> v1 = ++v;
     * std::cout << v1 << std::endl; // (2, 4)
     * std::cout << v << std::endl; // (2, 4)
     * 
    */
    Vector2<T> operator++() {
      x++; y++;
      return *this;
    }

    /**
     * Postfix increment
     * 
     * [usage]
     * Vector<int> v(1, 3);
     * Vector<int> v1 = v++;
     * std::cout << v1 << std::endl; // (2, 4)
     * std::cout << v << std::endl; // (1, 3)
     * 
    */
    Vector2<T> operator++(const int dummy) {
      Vector2<T> v = *this;
      x++; y++;
      return v;
    }

    /**
     * Prefix increment
     * 
     * [usage]
     * Vector<int> v(1, 3);
     * Vector<int> v1 = --v;
     * std::cout << v1 << std::endl; // (0, 2)
     * std::cout << v << std::endl; // (0, 2)
     * 
    */
    Vector2<T> operator--() {
      x--; y--;
      return *this;
    }

    /**
     * Postfix increment
     * 
     * [usage]
     * Vector<int> v(1, 3);
     * Vector<int> v1 = v--;
     * std::cout << v1 << std::endl; // (1, 3)
     * std::cout << v << std::endl; // (0, 2)
     * 
    */
    Vector2<T> operator--(const int dummy) {
      Vector2<T> v = *this;
      x--; y--;
      return v;
    }

    /**
     * Compound assignment operator for addition.
     * 
     * [usage]
     * Vector<int> v1(1, 2);
     * Vector<int> v2(3, 4);
     * v1 += v2;
     * std::cout << v1 << std::endl; // (4, 6)
     * 
    */
    Vector2<T> operator+=(const Vector2<T>& v) {
      x += v.x;
      y += v.y;
      return *this;
    }

    /**
     * Compound assignment operator for subtraction.
     * 
     * [usage]
     * Vector<int> v1(1, 2);
     * Vector<int> v2(3, 4);
     * v1 -= v2;
     * std::cout << v1 << std::endl; // (-2, -2)
     * 
    */
    Vector2<T> operator-=(const Vector2<T>& v) {
      x -= v.x;
      y -= v.y;
      return *this;
    }

    /**
     * Find the sum of two vectors.
     * 
     * [usage]
     * Vector<int> v1(1, 2);
     * Vector<int> v2(3, 4);
     * v = v1 + v2;
     * std::cout << v << std::endl; // (4, 6)
     * 
    */
    Vector2<T> operator+(const Vector2<T>& v) { return Vector2<T>(x + v.x, y + v.y); }

    /**
     * Find the difference of two vectors.
     * 
     * [usage]
     * Vector<int> v1(1, 2);
     * Vector<int> v2(3, 4);
     * v = v1 - v2;
     * std::cout << v << std::endl; // (-2, -2)
     * 
    */
    Vector2<T> operator-(const Vector2<T>& v) { return Vector2<T>(x - v.x, y - v.y); }

    /**
     * Find the dot product of two vectors.
     * 
     * [usage]
     * Vector<int> v1(1, 2);
     * Vector<int> v2(3, 4);
     * int dotProduct = v1 * v2;
     * std::cout << dotProduct << std::endl; // 11
     * 
    */
    T operator*(const Vector2<T>& v) { return x * v.x + y * v.y; }

    /**
     * Add a plus sign to vector.
     * 
     * [usage]
     * Vector<int> v1(1, 2);
     * Vector<int> v = +v1;
     * std::cout << v << std::endl; // (1, 2)
     * 
    */
    Vector2<T> operator+() { return Vector2<T>(x, y); }

    /**
     * Add a minus sign to vector.
     * 
     * [usage]
     * Vector<int> v1(1, 2);
     * Vector<int> v = +v1;
     * std::cout << v << std::endl; // (-1, -2)
     * 
    */
    Vector2<T> operator-() { return Vector2<T>(-x, -y); }

    /**
     * Judge whether vectors are equal to each other or not.
     * 
     * [usege]
     * Vector<int> v1(1, 2);
     * Vector<int> v2(1, 2);
     * std::cout << (v1 == v2) << std::endl; // 1
     * 
    */
    bool operator==(const Vector2<T>& v) { return ( x == v.x && y == v.y ); }

    /**
     * Judge whether vectors are inequal to each other or not.
     * 
     * [usage]
     * Vector<int> v1(1, 2);
     * Vector<int> v2(1, 2);
     * std::cout << (v1 != v2) << std::endl; // 0
     * 
    */
    bool operator!=(const Vector2<T>& v) { return !( x == v.x && y == v.y ); }

};

/**
 * Major Type Classes
*/
using Vector2i = Vector2<int>;
using Vector2d = Vector2<double>;
using Vector2f = Vector2<float>;

#endif
