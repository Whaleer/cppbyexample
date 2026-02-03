// _break_ 用于跳出循环。
// _continue_ 用于跳过本次循环的剩余部分。

#include <iostream>

using namespace std;

int main() {

  // break 示例：找到第一个符合条件的元素
  cout << "break 示例：" << endl;
  for (int i = 1; i <= 10; i++) {
    if (i == 5) {
      cout << "找到 5，退出循环" << endl;
      break;
    }
    cout << i << " ";
  }
  cout << endl;

  // continue 示例：跳过特定元素
  cout << "\ncontinue 示例（跳过偶数）：" << endl;
  for (int i = 1; i <= 10; i++) {
    if (i % 2 == 0) {
      continue;
    }
    cout << i << " ";
  }
  cout << endl;

  // break 和 continue 在 while 循环中
  cout << "\nwhile 循环中的 break 和 continue：" << endl;
  int count = 0;
  while (count < 10) {
    count++;

    if (count == 3) {
      cout << "跳过 3" << endl;
      continue;
    }

    if (count == 6) {
      cout << "遇到 6，退出循环" << endl;
      break;
    }

    cout << count << " ";
  }
  cout << endl;

  return 0;
}
