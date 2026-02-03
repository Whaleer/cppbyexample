// _内联函数(Inline Functions)_ 提示编译器内联展开。
// 适用于短小、频繁调用的函数。

#include <iostream>

using namespace std;

// 内联函数
inline int square(int x) { return x * x; }

inline int max(int a, int b) { return (a > b) ? a : b; }

int main() {

  // 编译器可能内联展开
  cout << "square(5) = " << square(5) << endl;
  cout << "square(10) = " << square(10) << endl;

  cout << "\nmax(10, 20) = " << max(10, 20) << endl;
  cout << "max(30, 15) = " << max(30, 15) << endl;

  // 内联函数在循环中的优势
  cout << "\n1-10 的平方：" << endl;
  for (int i = 1; i <= 10; i++) {
    cout << square(i) << " ";
  }
  cout << endl;

  return 0;
}
