// _for 循环(For Loop)_ 是最常用的循环结构。
// 语法：`for (initialization; condition; update)`

#include <iostream>

using namespace std;

int main() {

  // 基本用法：计数循环
  for (int i = 0; i < 5; i++) {
    cout << i << " ";
  }
  cout << endl;

  // 倒序循环
  cout << "\n倒序：" << endl;
  for (int i = 4; i >= 0; i--) {
    cout << i << " ";
  }
  cout << endl;

  // 步长为 2
  cout << "\n步长为 2：" << endl;
  for (int i = 0; i < 10; i += 2) {
    cout << i << " ";
  }
  cout << endl;

  // 计算累加和
  int sum = 0;
  for (int i = 1; i <= 10; i++) {
    sum += i;
  }
  cout << "\n1+2+...+10 = " << sum << endl;

  // 多个初始化和更新
  cout << "\n两个变量：" << endl;
  for (int i = 0, j = 10; i < j; i++, j--) {
    cout << "i=" << i << ", j=" << j << endl;
  }

  return 0;
}
