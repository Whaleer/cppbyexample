// _函数重载(Function Overloading)_ 允许定义同名函数。
// 通过参数类型或数量区分。

#include <iostream>

using namespace std;

// 重载函数：接受两个整数
int add(int a, int b) { return a + b; }

// 重载函数：接受两个浮点数
double add(double a, double b) { return a + b; }

// 重载函数：接受三个整数
int add(int a, int b, int c) { return a + b + c; }

// 打印整数
void print(int value) { cout << "整数：" << value << endl; }

// 打印字符串
void print(string value) { cout << "字符串：" << value << endl; }

int main() {

  cout << "add(10, 20) = " << add(10, 20) << endl;
  cout << "add(1.5, 2.5) = " << add(1.5, 2.5) << endl;
  cout << "add(10, 20, 30) = " << add(10, 20, 30) << endl;

  print(42);
  print("Hello");

  return 0;
}
