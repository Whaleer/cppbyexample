// _空指针(Null Pointer)_ 是不指向任何有效对象的指针。
// 使用 `nullptr`（C++11）表示空指针。

#include <iostream>

using namespace std;

int main() {

  // 声明空指针
  int *p1 = nullptr;
  int *p2 = NULL;
  int *p3 = 0;

  // 检查指针是否为空
  if (p1 == nullptr) {
    cout << "p1 是空指针" << endl;
  }

  // 使用前必须检查
  int value = 42;
  p1 = &value;

  if (p1 != nullptr) {
    cout << "\np1 指向的值：" << *p1 << endl;
  }

  // 重新赋值为空
  p1 = nullptr;

  // 不要解引用空指针！
  // cout << *p1; // 错误！会导致程序崩溃

  // 推荐使用 `nullptr` 而非 `NULL` 或 `0`
  int *p4 = nullptr;

  if (p4 != nullptr) {
    cout << *p4 << endl;
  }

  return 0;
}
