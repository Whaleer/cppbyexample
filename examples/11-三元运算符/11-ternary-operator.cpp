// _三元运算符(Ternary Operator)_ 是一个简洁的条件表达式。
// 语法：`condition ? value_if_true : value_if_false`

#include <iostream>

using namespace std;

int main() {

  int age = 18;

  // 使用三元运算符判断是否成年
  string result = age >= 18 ? "成年" : "未成年";
  cout << result << endl;

  age = 15;
  result = age >= 18 ? "成年" : "未成年";
  cout << result << endl;

  // 三元运算符可以嵌套（不推荐）
  int score = 75;
  string grade = score >= 90   ? "A"
                 : score >= 80 ? "B"
                 : score >= 60 ? "C"
                               : "D";
  cout << "\nscore = " << score << ", grade = " << grade << endl;

  // 与 if-else 对比
  if (score >= 90) {
    grade = "A";
  } else if (score >= 80) {
    grade = "B";
  } else if (score >= 60) {
    grade = "C";
  } else {
    grade = "D";
  }
  cout << "grade = " << grade << endl;

  return 0;
}
