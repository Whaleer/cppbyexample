// _switch 语句(Switch Statement)_ 用于多分支选择。
// 适用于判断一个变量的多个离散值。

#include <iostream>

using namespace std;

int main() {

  int day = 3;

  switch (day) {
  case 1:
    cout << "星期一" << endl;
    break;
  case 2:
    cout << "星期二" << endl;
    break;
  case 3:
    cout << "星期三" << endl;
    break;
  case 4:
    cout << "星期四" << endl;
    break;
  case 5:
    cout << "星期五" << endl;
    break;
  case 6:
    cout << "星期六" << endl;
    break;
  case 7:
    cout << "星期日" << endl;
    break;
  default:
    cout << "无效的日期" << endl;
  }

  // `break` 的重要性
  cout << "\n没有 break 的情况：" << endl;
  day = 2;
  switch (day) {
  case 1:
    cout << "周一" << endl;
  case 2:
    cout << "周二" << endl;
  case 3:
    cout << "周三" << endl;
    break;
  default:
    cout << "其他" << endl;
  }

  return 0;
}
