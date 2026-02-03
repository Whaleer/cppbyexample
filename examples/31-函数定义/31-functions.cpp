// _函数(Functions)_ 是可重用的代码块。
// 包括返回值、参数和作用域。

#include <iostream>

using namespace std;

// 函数声明
int add(int a, int b);
void greet(string name);
int maxOfThree(int a, int b, int c);

int main() {

  // 调用函数
  int result = add(10, 20);
  cout << "add(10, 20) = " << result << endl;

  greet("张三");

  cout << "\nmaxOfThree(3, 7, 5) = " << maxOfThree(3, 7, 5) << endl;

  return 0;
}

// 函数定义
int add(int a, int b) { return a + b; }

void greet(string name) { cout << "你好，" << name << "！" << endl; }

int maxOfThree(int a, int b, int c) {
  int max = a;
  if (b > max) {
    max = b;
  }
  if (c > max) {
    max = c;
  }
  return max;
}
