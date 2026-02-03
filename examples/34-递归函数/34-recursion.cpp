// _递归函数(Recursive Functions)_ 调用自身。
// 必须有终止条件，避免无限递归。

#include <iostream>

using namespace std;

// 计算阶乘：n! = n * (n-1)!
int factorial(int n) {
  if (n <= 1) {
    return 1;
  }
  return n * factorial(n - 1);
}

// 斐波那契数列：F(n) = F(n-1) + F(n-2)
int fibonacci(int n) {
  if (n <= 0) {
    return 0;
  }
  if (n == 1) {
    return 1;
  }
  return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {

  // 计算阶乘
  for (int i = 0; i <= 5; i++) {
    cout << i << "! = " << factorial(i) << endl;
  }

  // 斐波那契数列
  cout << "\n斐波那契数列前 10 项：" << endl;
  for (int i = 0; i < 10; i++) {
    cout << fibonacci(i) << " ";
  }
  cout << endl;

  return 0;
}
