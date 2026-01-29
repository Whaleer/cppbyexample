# C++ by Example

C++ by Example 是一个通过带注释的示例程序学习 C++ 语言的网站。

本项目基于 [Go by Example](https://gobyexample.com) 项目，采用了相同的架构和模板，专注于展示 C++ 语言的特性和用法。

## 快速开始

浏览 [C++ by Example](https://cppbyexample.com) 或查看下面的第一个示例：

- [Hello World](hello-world) - 你的第一个 C++ 程序

## 运行示例

你可以使用在线编译器运行这些示例，或者在本地使用 g++ 编译器：

```bash
# 编译并运行示例
g++ -std=c++11 example.cpp -o example
./example
```

## 项目结构

本项目包含了网站的内容和构建工具链，网站使用的是 `public` 目录下静态文件（html 等文件）的内容。它是这样被构建出来的：通过 `程序` 提取 `examples` 目录下的源码及注释，并使用 `templates` 目录下的静态文件模板将其渲染为静态文件，最终将生成的静态文件输出到 `public` 目录下。

实现此构建过程的 `程序` 位于 `tools` 目录下，构建得到的 `public` 目录下的静态文件（html 等文件），可以部署到任何支持静态内容的系统。例如 S3、CloudFront 以及任何 Web 服务器。

## 构建

若想自行构建该网站，你需要安装 Go、g++、clang-format。然后运行下面的命令：

```bash
# 克隆项目
git clone https://github.com/your-username/cppbyexample.git
cd cppbyexample

# 构建网站
tools/build

# 本地预览
tools/serve
```

然后在浏览器中打开 `http://127.0.0.1:8000/`

## 许可协议

本项目基于 [Go by Example](https://github.com/mmcgrana/gobyexample) 项目，采用 [CC BY-SA 3.0](http://creativecommons.org/licenses/by/3.0/) 协议。

Go by Example 的著作权归 [Mark McGranaghan](https://markmcgranaghan.com) 和 [Eli Bendersky](https://eli.thegreenplace.net) 所有。

本项目在此基础上的改写、翻译和新增内容（包括 C++ 示例和文档），除非另有说明，均依据 CC BY-NC-SA 3.0 协议发布。

## 参考资源

- [Go by Example](https://gobyexample.com) - 原始项目
- [C++ Reference](https://en.cppreference.com) - C++ 官方文档
- [LearnCpp.com](https://www.learncpp.com) - C++ 学习教程
