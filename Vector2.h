#pragma once

namespace nash {
  template <typename T>
  class Vector2 {
    private:
      T x{};
      T y{};

    public:
      constexpr Vector2();
      constexpr Vector2(T x, T y);

      template <typename U>
      constexpr explicit Vector2(const Vector2<U>& vec);

      virtual ~Vector2();

  };

  using Vector2i = Vector2<int>;
  using Vector2f = Vector2<float>;
  using Vector2d = Vector2<double>;
  
}
