// _结构体(Struct)_ 用于将不同类型的数据组合在一起。
// 是创建自定义数据类型的基础。

#include <iostream>

using namespace std;

struct Point {
  int x;
  int y;
};

struct Student {
  int id;
  string name;
  double score;
};

int main() {

  // 声明结构体变量
  Point p1;

  // 访问结构体成员（使用 `.` 运算符）
  p1.x = 10;
  p1.y = 20;
  cout << "p1: (" << p1.x << ", " << p1.y << ")" << endl;

  // 声明并初始化
  Student s1;
  s1.id = 1001;
  s1.name = "张三";
  s1.score = 95.5;
  cout << "\ns1: " << s1.id << ", " << s1.name << ", " << s1.score << endl;

  // 修改结构体成员
  s1.score = 98.0;
  cout << "修改后分数：" << s1.score << endl;

  // 结构体作为函数参数（传递副本）
  Point p2 = p1;
  p2.x = 100;
  cout << "\np1.x = " << p1.x << ", p2.x = " << p2.x << endl;

  return 0;
}
