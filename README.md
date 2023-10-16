# cpp lib

### Modules

* [Documents](#documents)
* [Modules](#modules)

### Documents
- [Build desktop Windows apps using the Win32 API - Win32 apps | Microsoft Learn](https://learn.microsoft.com/en-us/windows/win32/)
- [Operator Overloading | Microsoft Learn](https://learn.microsoft.com/en-us/cpp/cpp/operator-overloading?view=msvc-170)

### Modules
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
