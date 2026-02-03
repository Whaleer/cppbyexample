// _复合赋值运算符(Compound Assignment Operators)_ 是
// 一种简写形式，将运算和赋值合并。

#include <iostream>

using namespace std;

int main() {

  int a = 10;

  // 加法赋值 `+=`
  a += 5;
  cout << "a += 5: " << a << endl;

  // 减法赋值 `-=`
  a -= 3;
  cout << "a -= 3: " << a << endl;

  // 乘法赋值 `*=`
  a *= 2;
  cout << "a *= 2: " << a << endl;

  // 除法赋值 `/=`
  a /= 4;
  cout << "a /= 4: " << a << endl;

  // 模运算赋值 `%=`
  a %= 3;
  cout << "a %= 3: " << a << endl;

  // 复合赋值等价于展开形式
  int b = 10;
  b += 5;

  int c = 10;
  c = c + 5;

  cout << "\nb += 5: " << b << endl;
  cout << "c = c + 5: " << c << endl;

  // 对字符串也可以使用 `+=`
  string s = "hello";
  s += " world";
  cout << "\ns += \" world\": " << s << endl;

  return 0;
}
