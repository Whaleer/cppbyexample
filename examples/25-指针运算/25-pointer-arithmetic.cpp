// 指针 _运算(Pointer Arithmetic)_ 基于指针的类型。
// `p + 1` 移动一个类型的大小。

#include <iostream>

using namespace std;

int main() {

  int arr[] = {10, 20, 30, 40, 50};
  int *p = arr;

  cout << "数组元素：" << endl;
  for (int i = 0; i < 5; i++) {
    cout << "arr[" << i << "] = " << arr[i] << endl;
  }

  cout << "\n使用指针访问数组：" << endl;
  cout << "*(p + 0) = " << *(p + 0) << endl;
  cout << "*(p + 1) = " << *(p + 1) << endl;
  cout << "*(p + 2) = " << *(p + 2) << endl;

  // 指针运算
  cout << "\n指针运算：" << endl;
  cout << "p = " << p << endl;
  cout << "p + 1 = " << (p + 1) << endl;
  cout << "p + 2 = " << (p + 2) << endl;

  // 移动的字节数
  cout << "\n移动的字节数：" << endl;
  cout << "(p + 1) - p = " << (char *)(p + 1) - (char *)p << " 字节" << endl;

  // 自增/自减
  cout << "\n指针自增：" << endl;
  p = arr;
  cout << "*p = " << *p << endl;
  p++;
  cout << "p++ 后：*p = " << *p << endl;

  return 0;
}
