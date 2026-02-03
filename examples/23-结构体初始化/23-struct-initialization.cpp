// 结构体 _初始化(Initialization)_ 可以使用多种方式。
// 聚合初始化是最简洁的方式。

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

  // 聚合初始化（最常用）
  Point p1 = {10, 20};
  cout << "p1: (" << p1.x << ", " << p1.y << ")" << endl;

  // 指定成员初始化（C++11）
  Point p2 = {.x = 30, .y = 40};
  cout << "p2: (" << p2.x << ", " << p2.y << ")" << endl;

  // 部分初始化，其余为默认值
  Point p3 = {};
  Point p4 = {50};
  cout << "\np3: (" << p3.x << ", " << p3.y << ")" << endl;
  cout << "p4: (" << p4.x << ", " << p4.y << ")" << endl;

  // 结构体数组
  Point points[] = {{1, 2}, {3, 4}, {5, 6}};
  cout << "\n结构体数组：" << endl;
  for (int i = 0; i < 3; i++) {
    cout << points[i].x << ", " << points[i].y << endl;
  }

  return 0;
}
