// 遍历 _数组(Arrays)_ 是常见的操作。
// 可以使用索引或指针进行遍历。

#include <iostream>

using namespace std;

int main() {

  int arr[] = {10, 20, 30, 40, 50};
  int size = sizeof(arr) / sizeof(arr[0]);

  // 使用索引遍历（最常见）
  cout << "使用索引遍历：" << endl;
  for (int i = 0; i < size; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;

  // 计算数组元素的和
  int sum = 0;
  for (int i = 0; i < size; i++) {
    sum += arr[i];
  }
  cout << "\n数组的和：" << sum << endl;

  // 查找最大值
  int max = arr[0];
  for (int i = 1; i < size; i++) {
    if (arr[i] > max) {
      max = arr[i];
    }
  }
  cout << "最大值：" << max << endl;

  // 倒序遍历
  cout << "\n倒序遍历：" << endl;
  for (int i = size - 1; i >= 0; i--) {
    cout << arr[i] << " ";
  }
  cout << endl;

  return 0;
}
