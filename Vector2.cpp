#include "Vector2.h"

template <typename T>
constexpr nash::Vector2<T>::Vector2() = default;

template <typename T>
template <typename U>
constexpr nash::Vector2<T>::Vector2(const Vector2<U>& vec) : x(static_cast<T>(vec.x), static_cast<T>(vec.y)) {}

template <typename T>
nash::Vector2<T>::~Vector2() {}

template <typename T>
template <typename U>
constexpr nash::Vector2<T>& nash::Vector2<T>::operator=(const Vector2<U>& vec) {
  this->x = static_cast<T>(vec.x);
  this->y = static_cast<T>(vec.y);
  return this;
}
