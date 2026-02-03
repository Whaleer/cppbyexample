// _do-while 循环(Do-While Loop)_ 至少执行一次。
// 先执行，再判断条件。

#include <iostream>

using namespace std;

int main() {

  // 基本用法：至少执行一次
  int count = 0;
  do {
    cout << count << " ";
    count++;
  } while (count < 5);
  cout << endl;

  // 即使条件为假，也会执行一次
  count = 10;
  cout << "\ncount = 10：" << endl;
  do {
    cout << "这会执行一次" << endl;
    count++;
  } while (count < 5);

  // 与 while 对比
  cout << "\nwhile 循环（条件为假时不执行）：" << endl;
  count = 10;
  while (count < 5) {
    cout << "这不会执行" << endl;
    count++;
  }

  // 适合用于用户输入验证
  int number;
  do {
    cout << "\n请输入一个正整数：";
    cin >> number;
  } while (number <= 0);
  cout << "你输入的是：" << number << endl;

  return 0;
}
