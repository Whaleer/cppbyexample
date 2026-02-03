// _数组(Arrays)_ 是存储多个相同类型数据的容器。
// 数组的大小在创建时固定，内存连续。

#include <iostream>

using namespace std;

int main() {

  // 声明并初始化数组
  int arr1[5] = {1, 2, 3, 4, 5};

  // 不指定大小，编译器自动推导
  int arr2[] = {10, 20, 30, 40, 50};

  // 部分初始化，其余为 0
  int arr3[5] = {1, 2};
  cout << "arr3[2] = " << arr3[2] << endl;

  // 访问数组元素（索引从 0 开始）
  cout << "\narr1 的元素：" << endl;
  cout << "arr1[0] = " << arr1[0] << endl;
  cout << "arr1[1] = " << arr1[1] << endl;
  cout << "arr1[4] = " << arr1[4] << endl;

  // 修改数组元素
  arr1[0] = 100;
  cout << "\n修改后 arr1[0] = " << arr1[0] << endl;

  // 数组大小
  cout << "\narr1 的大小：" << sizeof(arr1) << " 字节" << endl;
  cout << "元素个数：" << sizeof(arr1) / sizeof(arr1[0]) << endl;

  // 不同类型的数组
  double arr4[3] = {1.1, 2.2, 3.3};
  char arr5[4] = {'a', 'b', 'c', '\0'};
  cout << "\n字符数组：" << arr5 << endl;

  return 0;
}
