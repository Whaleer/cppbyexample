// C++ 提供 _自增(Increment)_ 和 _自减(Decrement)_ 运算符。
// 前缀和后缀形式有不同的行为。

#include <iostream>

using namespace std;

int main() {

  int a = 5;

  // 后缀自增 `i++`：先使用原值，再加 1
  int b = a++;
  cout << "a: " << a << ", b: " << b << endl;

  a = 5;

  // 前缀自增 `++i`：先加 1，再使用新值
  int c = ++a;
  cout << "a: " << a << ", c: " << c << endl;

  a = 5;

  // 后缀自减 `i--`：先使用原值，再减 1
  int d = a--;
  cout << "a: " << a << ", d: " << d << endl;

  a = 5;

  // 前缀自减 `--i`：先减 1，再使用新值
  int e = --a;
  cout << "a: " << a << ", e: " << e << endl;

  // 在循环中的常用方式
  cout << "\nfor loop with i++:" << endl;
  for (int i = 0; i < 3; i++) {
    cout << i << " ";
  }
  cout << endl;

  cout << "\nfor loop with ++i:" << endl;
  for (int i = 0; i < 3; ++i) {
    cout << i << " ";
  }
  cout << endl;

  return 0;
}
