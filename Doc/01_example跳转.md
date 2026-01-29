# 示例跳转问题修复文档

## 问题描述

在浏览器中打开 C++ by Example 网站主页后，点击 "Hello World" 示例链接时，浏览器直接下载了文件而不是跳转到示例页面。

### 表现现象
- 访问 `http://127.0.0.1:8000/` 显示主页正常
- 点击 "Hello World" 链接触发文件下载
- 浏览器不会渲染 HTML 内容

## 解决思路

### 问题分析

1. **检查文件结构**
   - 发现 `public/hello-world` 是一个文件而非目录
   - 使用 `file` 命令确认其为 HTML 文档，但没有 `.html` 扩展名

2. **查找根本原因**
   - 检查 `tools/generate.go` 第 273 行，发现生成文件时未添加扩展名：
     ```go
     exampleF, err := os.Create(siteDir + "/" + example.ID)
     ```
   - 检查 `templates/index.tmpl` 第 29 行，链接也未添加扩展名：
     ```html
     <a href="{{.ID}}">{{.Name}}</a>
     ```
   - 检查 `templates/example.tmpl` 第 12、17、42 行，导航链接同样缺少扩展名

3. **理解 HTTP 服务器行为**
   - Python 的 SimpleHTTPServer 根据文件扩展名判断 Content-Type
   - 无扩展名的文件无法被识别为 HTML，导致浏览器触发下载

### 解决方案

为所有示例页面和链接添加 `.html` 扩展名，确保 HTTP 服务器正确识别文件类型。

## 解决流程

### 步骤 1：修改代码生成工具

**文件**: `tools/generate.go:273`

```go
// 修改前
exampleF, err := os.Create(siteDir + "/" + example.ID)

// 修改后
exampleF, err := os.Create(siteDir + "/" + example.ID + ".html")
```

### 步骤 2：修改主页模板

**文件**: `templates/index.tmpl`

修改两处链接，添加 `.html` 扩展名：

```html
<!-- 第 23 行：first example 链接 -->
<!-- 修改前 -->
<a href="hello-world">first example</a>

<!-- 修改后 -->
<a href="hello-world.html">first example</a>
```

```html
<!-- 第 29 行：示例列表链接 -->
<!-- 修改前 -->
<li><a href="{{.ID}}">{{.Name}}</a></li>

<!-- 修改后 -->
<li><a href="{{.ID}}.html">{{.Name}}</a></li>
```

### 步骤 3：修改示例页面模板

**文件**: `templates/example.tmpl`

修改键盘导航和 Next 示例链接：

```html
<!-- 第 12 行：左箭头导航 -->
<!-- 修改前 -->
window.location.href = '{{.PrevExample.ID}}';

<!-- 修改后 -->
window.location.href = '{{.PrevExample.ID}}.html';
```

```html
<!-- 第 17 行：右箭头导航 -->
<!-- 修改前 -->
window.location.href = '{{.NextExample.ID}}';

<!-- 修改后 -->
window.location.href = '{{.NextExample.ID}}.html';
```

```html
<!-- 第 42 行：Next example 链接 -->
<!-- 修改前 -->
<a href="{{.NextExample.ID}}">{{.NextExample.Name}}</a>

<!-- 修改后 -->
<a href="{{.NextExample.ID}}.html">{{.NextExample.Name}}</a>
```

### 步骤 4：重新构建网站

```bash
./tools/build
```

### 步骤 5：验证修复结果

```bash
# 检查生成的文件
ls -la public/*.html
# 输出应包含：public/hello-world.html

# 验证文件类型
file public/hello-world.html
# 输出应为：HTML document text

# 启动服务器测试
./tools/serve

# 检查 HTTP 响应头
curl -s -I http://127.0.0.1:8000/hello-world.html | head -5
# 应看到：Content-Type: text/html
```

## 验证结果

✓ 生成文件：`public/hello-world.html`（HTML 文档）
✓ Content-Type: `text/html`（正确识别）
✓ 主页链接指向 `hello-world.html`
✓ 点击链接正确跳转到示例页面，不再下载文件

## 相关文件

- `tools/generate.go` - 网站生成工具
- `templates/index.tmpl` - 主页模板
- `templates/example.tmpl` - 示例页面模板

## 注意事项

1. 每次修改模板后都需要运行 `./tools/build` 重新生成网站
2. 开发时可以使用 `./tools/serve` 本地预览
3. 新增示例时，确保链接和导航都包含 `.html` 扩展名
