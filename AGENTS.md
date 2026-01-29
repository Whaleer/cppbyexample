# C++ by Example - 代理开发指南

本项目为 C++ 语言学习者提供带注释的示例程序，基于 Go by Example 构建。

## 项目结构

```
cppbyexample/
├── examples/           # 示例代码（每个示例一个子目录）
│   └── <name>/         # 包含 <name>.cpp 和可选的 <name>.sh
├── templates/          # HTML 模板
├── tools/              # Go 构建工具
├── public/             # 生成的静态网站（不提交）
└── examples.txt        # 导航顺序定义
```

## 构建和测试命令

```bash
# 完整构建流程（运行测试 → 格式化 → 检查行长度 → 生成 HTML）
tools/build

# 编译检查所有示例
tools/test

# 格式化所有示例代码
tools/format

# 格式化单个文件
clang-format -i examples/hello-world/hello-world.cpp

# 本地预览（访问 http://127.0.0.1:8000）
tools/serve

# 运行单个示例
g++ -std=c++11 examples/hello-world/hello-world.cpp -o hello-world
./hello-world
```

## 代码风格规范

### 基本规则

- **C++ 标准**：C++11
- **格式化**：必须通过 `clang-format` 格式化
- **行长度**：非注释代码行最多 58 字符（tabs 按 4 空格计算）
- **注释语言**：中文
- **命名空间**：全局命名空间或 `std` 命名空间

### 命名约定

| 类型          | 约定              | 示例                    |
|---------------|-------------------|-------------------------|
| 类名          | PascalCase        | `MyClass`, `Rectangle`  |
| 函数名        | camelCase 或 snake_case | `printHello`, `print_hello` |
| 变量名        | camelCase 或 snake_case | `myVariable`, `my_variable` |
| 常量          | UPPER_SNAKE_CASE  | `MAX_SIZE`, `PI`        |
| 宏定义        | UPPER_SNAKE_CASE  | `PI`, `DEBUG_MODE`      |

### 注释风格

```cpp
// _变量(Variable)_ 是用于存储数据的容器。
// 使用 `auto` 关键字让编译器自动推导类型。

auto x = 42;  // x 的类型被推导为 int

// 你也可以显式指定类型。
int y = 100;  // y 的类型是 int
```

- 使用下划线包裹专业术语：`_变量(Variable)_`
- 使用反引号包裹代码片段：`auto x = 42;`
- 注释简短明了，每个块不超过 3-5 行
- 行内注释在代码后，用空格和 `//` 分隔

### 格式化规范

clang-format 默认设置，关键点：
- 缩进：2 空格
- 大括号：开括号另起一行（Allman 风格）
- 每行最多 58 字符（代码，非注释）

### 类型系统

```cpp
// 使用 auto 进行类型推导
auto x = 42;           // int
auto y = 3.14;         // double

// 显式类型声明
int count = 0;
double price = 99.99;
std::string name = "example";
```

### 错误处理

```cpp
// 检查返回值
std::ifstream file("example.txt");
if (!file.is_open()) {
    std::cerr << "Error: Could not open file" << std::endl;
    return 1;
}

// 异常处理
try {
    // 可能抛出异常的代码
} catch (const std::exception& e) {
    std::cerr << "Exception: " << e.what() << std::endl;
}
```

### 函数和方法

```cpp
int add(int a, int b) {
    return a + b;
}

class MyClass {
public:
    void doSomething();
    int getValue() const;
private:
    int value;
};
```

### 类定义

```cpp
class Rectangle {
private:
    int width;
    int height;

public:
    Rectangle(int w, int h) : width(w), height(h) {}

    int area() {
        return width * height;
    }
};
```

## 添加新示例

1. 在 `examples/` 下创建目录（kebab-case，如 `new-feature`）
2. 创建 `<feature-name>.cpp` 文件，编写带注释的代码
3. （可选）创建 `<feature-name>.sh` 文件展示输出
4. 在 `examples.txt` 添加示例名称（决定导航顺序）
5. 运行 `tools/build` 生成 HTML
6. 使用 `tools/serve` 预览

### 示例命名

- 使用 kebab-case：`hello-world`, `stl-vectors`, `file-io`
- 简洁明了，描述示例内容

## 约束和注意事项

- 避免复杂的模板元编程（保持易懂）
- 示例代码可直接运行（不依赖外部配置）
- `public/` 目录内容不提交到 Git
- 使用 C++11，更高版本需在注释中标注

## 常用参考

- [cppreference.com](https://en.cppreference.com/w/)
- [LearnCpp.com](https://www.learncpp.com)
- [Compiler Explorer](https://godbolt.org)

## 许可协议

基于 Go by Example，采用 CC BY-SA 3.0 协议。
