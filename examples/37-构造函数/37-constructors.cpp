// _构造函数(Constructor)_ 在创建对象时自动调用。
// 用于初始化对象的成员变量。

#include <iostream>

using namespace std;

class Rectangle {
private:
  int width;
  int height;

public:
  // 默认构造函数
  Rectangle() {
    width = 0;
    height = 0;
    cout << "调用默认构造函数" << endl;
  }

  // 带参数的构造函数
  Rectangle(int w, int h) {
    width = w;
    height = h;
    cout << "调用带参数的构造函数" << endl;
  }

  // 拷贝构造函数
  Rectangle(const Rectangle &other) {
    width = other.width;
    height = other.height;
    cout << "调用拷贝构造函数" << endl;
  }

  int area() { return width * height; }

  void print() {
    cout << "宽：" << width << ", 高：" << height << ", 面积：" << area()
         << endl;
  }
};

int main() {

  Rectangle rect1;
  rect1.print();

  Rectangle rect2(10, 5);
  rect2.print();

  Rectangle rect3 = rect2;
  rect3.print();

  return 0;
}
