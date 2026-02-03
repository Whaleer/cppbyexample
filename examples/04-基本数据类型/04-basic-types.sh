# 编译并运行程序
# 使用 g++ 编译器，指定 C++11 标准
$ g++ -std=c++11 04-basic-types.cpp -o 04-basic-types
$ ./04-basic-types

# 程序输出展示了各种基本数据类型的值：
int: 42
short: 10
long: 100000
long long: 100000
float: 3.14
double: 3.14159
char: A
bool: 1

# 使用 `sizeof` 运算符显示每种类型的字节大小：
# 注意：实际大小可能因平台和编译器而异
sizeof int: 4          # 整数类型占 4 字节（32 位）
sizeof short: 2        # 短整数类型占 2 字节（16 位）
sizeof long: 8         # 长整数类型占 8 字节（64 位）
sizeof long long: 8    # 长长整数类型占 8 字节（64 位）
sizeof float: 4        # 单精度浮点数占 4 字节
sizeof double: 8       # 双精度浮点数占 8 字节
sizeof char: 1         # 字符类型占 1 字节
sizeof bool: 1         # 布尔类型占 1 字节

# 整数类型后缀说明：
# - 普通整数（如 42）默认为 int 类型
# - L 后缀（如 100000L）表示 long 类型
# - LL 后缀（如 100000LL）表示 long long 类型

# 浮点类型后缀说明：
# - f 后缀（如 3.14f）表示 float 类型
# - 不带后缀的浮点数（如 3.14159）默认为 double 类型