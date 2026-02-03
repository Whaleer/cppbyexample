// _动态内存(Dynamic Memory)_ 在运行时分配。
// 使用 `new` 分配，`delete` 释放。

#include <iostream>

using namespace std;

int main() {

  // 动态分配单个变量
  int *ptr = new int;

  *ptr = 42;
  cout << "动态分配的值：" << *ptr << endl;

  // 释放内存（避免内存泄漏）
  delete ptr;

  // 动态分配数组
  int size = 5;
  int *arr = new int[size];

  for (int i = 0; i < size; i++) {
    arr[i] = i * 10;
  }

  cout << "\n动态数组：" << endl;
  for (int i = 0; i < size; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;

  // 释放数组内存
  delete[] arr;

  // 检查分配是否成功（`new` 失败抛出异常）
  try {
    int *large = new int[1000000000];
    delete[] large;
  } catch (const bad_alloc &e) {
    cout << "\n内存分配失败：" << e.what() << endl;
  }

  return 0;
}
