// _指针(Pointer)_ 是存储内存地址的变量。
// `&` 取地址，`*` 解引用。

#include <iostream>

using namespace std;

int main() {

  int a = 10;

  // 声明指针并初始化为变量 a 的地址
  int *p = &a;

  // 打印变量的值
  cout << "a = " << a << endl;

  // 打印变量的地址
  cout << "&a = " << &a << endl;

  // 打印指针的值（存储的地址）
  cout << "p = " << p << endl;

  // 打印指针的地址
  cout << "&p = " << &p << endl;

  // 解引用：访问指针指向的值
  cout << "*p = " << *p << endl;

  // 通过指针修改原变量的值
  *p = 20;
  cout << "\n通过 *p 修改后：" << endl;
  cout << "a = " << a << endl;
  cout << "*p = " << *p << endl;

  // 指针的大小（存储地址需要多少字节）
  cout << "\nsizeof(p) = " << sizeof(p) << endl;

  return 0;
}
