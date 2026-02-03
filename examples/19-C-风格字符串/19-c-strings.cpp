// C 风格 _字符串(Strings)_ 是以空字符 `\0` 结尾的字符数组。
// 需要手动管理内存大小。

#include <cstring>
#include <iostream>

using namespace std;

int main() {

  // C 风格字符串声明
  char str1[] = "hello";

  // 显式指定大小（包括 `\0`）
  char str2[20] = "world";

  // 逐个字符初始化（必须包含 `\0`）
  char str3[] = {'h', 'i', '\0'};

  // 打印字符串
  cout << "str1: " << str1 << endl;
  cout << "str2: " << str2 << endl;
  cout << "str3: " << str3 << endl;

  // 字符串长度（不包括 `\0`）
  cout << "\nstr1 长度：" << strlen(str1) << endl;

  // 字符串拼接（必须确保目标数组足够大）
  char result[50];
  strcpy(result, str1);
  strcat(result, " ");
  strcat(result, str2);
  cout << "\n拼接结果：" << result << endl;

  // 字符串比较
  char str4[] = "hello";
  if (strcmp(str1, str4) == 0) {
    cout << "\nstr1 和 str4 相同" << endl;
  }

  // 访问单个字符
  cout << "\nstr1[0] = " << str1[0] << endl;

  return 0;
}
