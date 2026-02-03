


# 要运行这个程序，先把代码放在
# `hello-world.cpp` 里，然后用 g++ 编译。
$ g++ -std=c++11 hello-world.cpp -o hello-world
$ ./hello-world
hello world

# 编译器做的事可以简单分成四步：
# 1. 预处理：展开头文件和宏
# 2. 编译：把 C++ 变成汇编
# 3. 汇编：把汇编变成机器码
# 4. 链接：把多个文件连成可执行程序

# 你可以用参数把每一步单独“看一眼”：
# `-E` 只做预处理，输出纯文本
$ g++ -E hello-world.cpp -o hello-world.i

# `-S` 编译到汇编，生成 .s 文件
$ g++ -S hello-world.cpp -o hello-world.s

# `-c` 汇编到目标文件，生成 .o 文件
$ g++ -c hello-world.cpp -o hello-world.o

# 最后链接，得到可执行文件
$ g++ hello-world.o -o hello-world
$ ./hello-world
hello world

# 如果我们想使用其他编译选项，
# 可以添加到 g++ 命令中。
# 例如，启用所有警告：
$ g++ -Wall hello-world.cpp

# 现在你已经了解了编译器的基本流程，
# 可以继续学习更多 C++ 示例了。
