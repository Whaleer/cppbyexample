// `auto` 关键字让编译器自动推导变量类型。
// 使代码更简洁，但会降低可读性。

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {

  // 基本类型推导
  auto a = 42;
  auto b = 3.14;
  auto c = 'A';
  auto d = "hello";

  cout << "a: " << a << " (int)" << endl;
  cout << "b: " << b << " (double)" << endl;
  cout << "c: " << c << " (char)" << endl;
  cout << "d: " << d << " (const char*)" << endl;

  // 推导引用
  int x = 10;
  auto &ref = x;

  // 推导指针
  auto ptr = &x;

  cout << "\nref = " << ref << endl;
  cout << "*ptr = " << *ptr << endl;

  // 复杂类型
  vector<int> vec = {1, 2, 3, 4, 5};
  auto it = vec.begin();
  cout << "\n第一个元素：" << *it << endl;

  // 注意：`auto` 不能用于函数参数（C++14 之前）
  // void func(auto x); // 错误

  return 0;
}
