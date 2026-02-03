// _if-else 链(If-Else Chain)_ 用于处理多个条件。
// `else if` 添加额外的条件判断。

#include <iostream>

using namespace std;

int main() {

  int score = 75;

  if (score >= 90) {
    cout << "优秀" << endl;
  } else if (score >= 80) {
    cout << "良好" << endl;
  } else if (score >= 60) {
    cout << "及格" << endl;
  } else {
    cout << "不及格" << endl;
  }

  // 只有第一个为真的条件会被执行
  score = 95;
  cout << "\nscore = " << score << endl;
  if (score >= 90) {
    cout << "优秀" << endl;
  } else if (score >= 80) {
    cout << "这个不会执行" << endl;
  }

  // 所有条件都为假时，执行 `else`
  score = 45;
  cout << "\nscore = " << score << endl;
  if (score >= 60) {
    cout << "及格" << endl;
  } else {
    cout << "不及格" << endl;
  }

  return 0;
}
