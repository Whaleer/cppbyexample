// _类(Class)_ 是用户自定义的数据类型。
// 包含成员变量和成员函数。

#include <iostream>

using namespace std;

class Rectangle {
public:
  int width;
  int height;

  // 成员函数
  int area() { return width * height; }

  void setDimensions(int w, int h) {
    width = w;
    height = h;
  }

  void print() {
    cout << "宽：" << width << ", 高：" << height << ", 面积：" << area()
         << endl;
  }
};

int main() {

  // 创建对象
  Rectangle rect1;

  // 访问成员变量
  rect1.width = 10;
  rect1.height = 5;

  // 调用成员函数
  rect1.print();

  Rectangle rect2;
  rect2.setDimensions(15, 8);
  rect2.print();

  return 0;
}
