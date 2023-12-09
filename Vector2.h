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
      constexpr Vector2(const Vector2<U>& vec);

      virtual ~Vector2();

  };
}
