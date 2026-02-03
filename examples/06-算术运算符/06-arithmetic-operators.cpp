// C++ 提供了基本的 _算术运算符(Arithmetic Operators)_。
// 用于执行常见的数学计算。

#include <iostream>

using namespace std;

int main() {

  int a = 10;
  int b = 3;

  // 加法运算符 `+`
  cout << "a + b = " << (a + b) << endl;

  // 减法运算符 `-`
  cout << "a - b = " << (a - b) << endl;

  // 乘法运算符 `*`
  cout << "a * b = " << (a * b) << endl;

  // 除法运算符 `/`
  // 整数除法会舍去小数部分
  cout << "a / b = " << (a / b) << endl;

  // 模运算符 `%`（取余）
  cout << "a % b = " << (a % b) << endl;

  // 浮点数除法会保留小数
  double x = 10.0;
  double y = 3.0;
  cout << "\n10.0 / 3.0 = " << (x / y) << endl;

  // 运算符优先级
  // 先乘除，后加减
  cout << "\na + b * 2 = " << (a + b * 2) << endl;

  // 使用括号改变优先级
  cout << "(a + b) * 2 = " << ((a + b) * 2) << endl;

  return 0;
}
