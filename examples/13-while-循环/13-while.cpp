// _while 循环(While Loop)_ 在条件为真时重复执行。
// 适用于循环次数不确定的情况。

#include <iostream>

using namespace std;

int main() {

  // 基本用法
  int count = 0;
  while (count < 5) {
    cout << count << " ";
    count++;
  }
  cout << endl;

  // 计算阶乘
  int n = 5;
  int factorial = 1;
  count = 1;

  while (count <= n) {
    factorial *= count;
    count++;
  }
  cout << "\n5! = " << factorial << endl;

  // 输入验证
  int number;
  cout << "\n请输入一个正整数：";
  cin >> number;

  while (number <= 0) {
    cout << "请输入一个正整数：";
    cin >> number;
  }
  cout << "你输入的是：" << number << endl;

  return 0;
}
