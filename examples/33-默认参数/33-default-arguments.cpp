// _默认参数(Default Arguments)_ 为函数参数提供默认值。
// 调用时可以省略这些参数。

#include <iostream>

using namespace std;

// 带默认参数的函数
void greet(string name = "朋友") { cout << "你好，" << name << "！" << endl; }

int power(int base, int exponent = 2) {
  int result = 1;
  for (int i = 0; i < exponent; i++) {
    result *= base;
  }
  return result;
}

int main() {

  // 使用默认参数
  greet();
  greet("张三");

  cout << "\npower(3) = " << power(3) << endl;
  cout << "power(3, 3) = " << power(3, 3) << endl;

  // 多个默认参数
  // void func(int a = 1, int b = 2, int c = 3);

  return 0;
}
