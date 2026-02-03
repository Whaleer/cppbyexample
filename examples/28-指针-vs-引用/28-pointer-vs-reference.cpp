// _指针(Pointer)_ 和 _引用(Reference)_ 都是间接访问对象。
// 它们有相似之处，但也有重要区别。

#include <iostream>

using namespace std;

int main() {

  int a = 10;
  int b = 20;

  // 指针和引用的基本使用
  int *ptr = &a;
  int &ref = a;

  cout << "初始状态：" << endl;
  cout << "a = " << a << ", *ptr = " << *ptr << ", ref = " << ref << endl;

  // 重新赋值
  ptr = &b;
  ref = b;

  cout << "\n重新赋值后：" << endl;
  cout << "a = " << a << ", b = " << b << endl;
  cout << "*ptr = " << *ptr << ", ref = " << ref << endl;

  // 关键区别
  cout << "\n关键区别：" << endl;
  cout << "指针可以为空，引用不能" << endl;
  cout << "指针可以改变指向，引用不能重新绑定" << endl;
  cout << "指针需要解引用，引用直接使用" << endl;

  int *nullPtr = nullptr;
  // int& nullRef; // 错误！引用必须初始化

  return 0;
}
