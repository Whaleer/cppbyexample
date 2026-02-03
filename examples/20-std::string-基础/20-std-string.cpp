// `std::string` 是 C++ 标准库提供的字符串类。
// 比C风格字符串更安全、更易用。

#include <iostream>
#include <string>

using namespace std;

int main() {

  // 声明字符串
  string s1 = "hello";
  string s2("world");

  // 空字符串
  string s3;

  // 打印字符串
  cout << "s1: " << s1 << endl;
  cout << "s2: " << s2 << endl;
  cout << "s3: " << s3 << endl;

  // 字符串长度
  cout << "\ns1 长度：" << s1.length() << endl;
  cout << "s1 大小：" << s1.size() << endl;

  // 访问单个字符
  cout << "\ns1[0] = " << s1[0] << endl;

  // 读取输入
  string name;
  cout << "\n请输入你的名字：";
  cin >> name;
  cout << "你好，" << name << "！" << endl;

  // 读取整行（包括空格）
  cin.ignore();
  string line;
  cout << "请输入一行文字：";
  getline(cin, line);
  cout << "你输入的是：" << line << endl;

  return 0;
}
