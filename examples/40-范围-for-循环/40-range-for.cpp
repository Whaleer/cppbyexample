// _范围 for 循环(Range-based For Loop)_ 简化容器遍历。
// 语法：`for (declaration : range)`

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {

  // 数组遍历
  int arr[] = {10, 20, 30, 40, 50};

  cout << "数组遍历（值）：" << endl;
  for (int x : arr) {
    cout << x << " ";
  }
  cout << endl;

  cout << "\n数组遍历（引用）：" << endl;
  for (int &x : arr) {
    x *= 2;
  }
  for (int x : arr) {
    cout << x << " ";
  }
  cout << endl;

  // vector 遍历
  vector<string> fruits = {"apple", "banana", "cherry"};

  cout << "\nvector 遍历：" << endl;
  for (const string &fruit : fruits) {
    cout << fruit << " ";
  }
  cout << endl;

  // 使用 `auto` 简化
  cout << "\n使用 auto：" << endl;
  for (const auto &fruit : fruits) {
    cout << fruit << " ";
  }
  cout << endl;

  return 0;
}
