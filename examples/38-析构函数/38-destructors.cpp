// _析构函数(Destructor)_ 在对象销毁时自动调用。
// 用于释放资源（如动态分配的内存）。

#include <iostream>

using namespace std;

class Simple {
public:
  Simple() { cout << "构造函数被调用" << endl; }

  ~Simple() { cout << "析构函数被调用" << endl; }
};

class DynamicArray {
private:
  int *data;
  int size;

public:
  DynamicArray(int s) {
    size = s;
    data = new int[size];
    cout << "分配了 " << size << " 个整数" << endl;
  }

  ~DynamicArray() {
    delete[] data;
    cout << "释放了内存" << endl;
  }

  void set(int index, int value) { data[index] = value; }

  int get(int index) { return data[index]; }
};

int main() {

  cout << "块开始" << endl;
  {
    Simple obj1;
    Simple obj2;
    cout << "块内代码" << endl;
  }
  cout << "块结束" << endl;

  cout << "\n动态分配的数组：" << endl;
  {
    DynamicArray arr(5);
    arr.set(0, 10);
    arr.set(1, 20);
    cout << "arr[0] = " << arr.get(0) << endl;
  }
  cout << "数组已销毁" << endl;

  return 0;
}
