// _const_ 限定符用于声明常量。
// 可以应用于变量、指针和引用。

#include <iostream>

using namespace std;

int main() {

  // const 变量（值不能修改）
  const int a = 10;
  cout << "a = " << a << endl;
  // a = 20; // 错误！

  // 指向常量的指针（指向的值不能修改）
  int b = 20;
  const int *ptr1 = &b;
  // *ptr1 = 30; // 错误！
  ptr1 = &a; // 可以改变指向

  // 常量指针（指针不能改变指向）
  int c = 30;
  int *const ptr2 = &b;
  *ptr2 = 40; // 可以修改指向的值
  // ptr2 = &c; // 错误！不能改变指向

  // 指向常量的常量指针
  const int *const ptr3 = &a;
  // *ptr3 = 50; // 错误！不能修改值
  // ptr3 = &b; // 错误！不能改变指向

  // 引用也可以用 const
  const int &ref = a;
  cout << "\nref = " << ref << endl;
  // ref = 60; // 错误！

  return 0;
}
