# cpp lib

### Modules

* [Vector2d](#vector2d)

### Vector2d
- [Vector2d](./Vector2d.hpp) : Library for 2-dimensional Vector.
```cpp:main.cpp
/* usage */
int main(int argc, char* argv[]) {
  Vector2d v1(1, 2);
  Vector2d v2(3, 4);
  Vector2d v;

  v1++;
  v = 2 * v1 + (-v2) * (+v1 * v2)
  v--;

  std::cout << v << std::endl; // (-51, -67)

  return 0;
}
```
