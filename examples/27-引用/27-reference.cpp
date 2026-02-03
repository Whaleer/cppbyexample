// _引用(Reference)_ 是变量的别名。
// 引用必须在声明时初始化，且不能重新绑定。

#include <iostream>

using namespace std;

int main() {

  int a = 10;

  // 声明引用（a 的别名）
  int &ref = a;

  // 通过引用修改原变量
  ref = 20;
  cout << "a = " << a << endl;
  cout << "ref = " << ref << endl;

  // 引用和原变量是同一个对象
  cout << "\n&a = " << &a << endl;
  cout << "&ref = " << &ref << endl;

  // 通过原变量修改，引用也会变化
  a = 30;
  cout << "\na = " << a << endl;
  cout << "ref = " << ref << endl;

  // 引用必须初始化
  // int& ref2; // 错误！

  // 引用不能重新绑定
  int b = 40;
  ref = b;
  cout << "\nref = b 之后：" << endl;
  cout << "a = " << a << endl;
  cout << "ref = " << ref << endl;

  return 0;
}
