// 字符串 _拼接(Concatenation)_ 可以使用 `+` 或 `append`。
// `std::string` 自动管理内存，无需担心缓冲区溢出。

#include <iostream>
#include <string>

using namespace std;

int main() {

  // 使用 `+` 运算符
  string s1 = "hello";
  string s2 = "world";
  string s3 = s1 + " " + s2;
  cout << "s3 = " << s3 << endl;

  // 使用 `append` 方法
  string s4 = "Hello";
  s4.append(" ");
  s4.append("C++");
  cout << "s4 = " << s4 << endl;

  // 拼接单个字符
  string s5 = "abc";
  s5 += 'd';
  cout << "\ns5 = " << s5 << endl;

  // 多次拼接
  string s6;
  for (int i = 0; i < 3; i++) {
    s6 += "ha";
  }
  cout << "\ns6 = " << s6 << endl;

  // `append` 可以指定次数
  string s7;
  s7.append(3, 'x');
  cout << "s7 = " << s7 << endl;

  return 0;
}
