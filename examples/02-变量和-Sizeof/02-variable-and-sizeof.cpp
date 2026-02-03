// C++ 中的 _变量(Variable)_ 用于存储数据。
// 每个变量都有特定的类型，决定其大小和操作。

#include <iostream>

using namespace std;

int main() {
  // 声明并初始化整数变量。
  int age = 25;

  // 声明浮点数变量。
  double price = 19.99;

  // 声明字符变量。
  char grade = 'A';

  // 声明布尔变量。
  bool isPassed = true;

  // 使用 `auto` 关键字让编译器推导类型。
  auto count = 100;

  // 打印变量的值。
  cout << "age: " << age << endl;
  cout << "price: " << price << endl;
  cout << "grade: " << grade << endl;
  cout << "isPassed: " << isPassed << endl;
  cout << "count: " << count << endl;

  // `sizeof` 返回类型或变量的大小（字节）。
  cout << "sizeof int: " << sizeof(int) << "\n";
  cout << "sizeof double: " << sizeof(double) << "\n";
  cout << "sizeof char: " << sizeof(char) << "\n";
  cout << "sizeof bool: " << sizeof(bool) << "\n";

  // 也可以对变量使用 `sizeof`。
  cout << "\nsizeof age: " << sizeof(age) << "\n";
  cout << "sizeof price: " << sizeof(price) << "\n";

  return 0;
}
