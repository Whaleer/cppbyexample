// C++ 提供了几种基本的 _数据类型(Data Types)_。
// 每种类型有不同的存储大小和取值范围。

#include <iostream>

using namespace std;

int main() {

  // _整数类型(Integer Types)_
  int a = 42;

  // 小整数类型
  short b = 10;

  // 长整数类型
  long c = 100000L;

  // 长长整数类型（C++11）
  long long d = 100000LL;

  // _浮点类型(Floating-point Types)_
  float e = 3.14f;

  double f = 3.14159;

  // _字符类型(Character Type)_
  char g = 'A';

  // _布尔类型(Boolean Type)_
  bool h = true;

  // 打印各种类型的值
  cout << "int: " << a << endl;
  cout << "short: " << b << endl;
  cout << "long: " << c << endl;
  cout << "long long: " << d << endl;
  cout << "float: " << e << endl;
  cout << "double: " << f << endl;
  cout << "char: " << g << endl;
  cout << "bool: " << h << endl;

  // 打印各类型的大小
  cout << "\nsizeof int: " << sizeof(int) << endl;
  cout << "sizeof short: " << sizeof(short) << endl;
  cout << "sizeof long: " << sizeof(long) << endl;
  cout << "sizeof long long: " << sizeof(long long) << endl;
  cout << "sizeof float: " << sizeof(float) << endl;
  cout << "sizeof double: " << sizeof(double) << endl;
  cout << "sizeof char: " << sizeof(char) << endl;
  cout << "sizeof bool: " << sizeof(bool) << endl;

  return 0;
}
