// _if 语句(If Statement)_ 用于根据条件执行代码。
// 条件为真时，执行对应代码块。

#include <iostream>

using namespace std;

int main() {

  int age = 18;

  if (age >= 18) {
    cout << "你已经是成年人了。" << endl;
  }

  age = 15;

  if (age >= 18) {
    cout << "你已经是成年人了。" << endl;
  }

  if (age < 18) {
    cout << "你还是未成年人。" << endl;
  }

  // 可以省略大括号（只用于单条语句）
  int score = 85;
  if (score >= 60)
    cout << "及格了！" << endl;

  // 多条语句需要大括号
  if (score >= 90) {
    cout << "优秀！" << endl;
    cout << "继续保持！" << endl;
  }

  return 0;
}
