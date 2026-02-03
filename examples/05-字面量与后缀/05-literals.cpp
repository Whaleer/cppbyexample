// C++ 中的 _字面量(Literals)_ 是直接在代码中写的值。
// 后缀可以指定字面量的类型。

#include <iostream>

using namespace std;

int main() {

  // 整数字面量默认为 `int` 类型。
  int a = 10;

  // `u` 或 `U` 后缀表示 `unsigned`。
  unsigned int b = 10u;

  // `l` 或 `L` 后缀表示 `long`。
  long c = 10L;

  // `ll` 或 `LL` 后缀表示 `long long`。
  long long d = 10LL;

  // 浮点字面量默认为 `double` 类型。
  double e = 3.14;

  // `f` 或 `F` 后缀表示 `float`。
  float f = 3.14f;

  // `l` 或 `L` 后缀表示 `long double`。
  long double g = 3.14L;

  // 字符字面量用单引号。
  char h = 'A';

  // 字符串字面量用双引号。
  const char *i = "hello";

  // 布尔字面量只有 `true` 和 `false`。
  bool j = true;

  // 打印各种字面量的值
  cout << "int: " << a << endl;
  cout << "unsigned int: " << b << endl;
  cout << "long: " << c << endl;
  cout << "long long: " << d << endl;
  cout << "double: " << e << endl;
  cout << "float: " << f << endl;
  cout << "long double: " << g << endl;
  cout << "char: " << h << endl;
  cout << "string: " << i << endl;
  cout << "bool: " << j << endl;

  return 0;
}
