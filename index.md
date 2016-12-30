## C++ Primer Learning Note 学习笔记

### CH1 开始
#### 1. 函数的定义
包含四个部分：返回类型，函数名，形参列表，函数体。

#### 2. 内置类型(built-in type)
即语言自身定义的类型，比如：int 等。  
类型则是程序设计中的最基本概念之一，一种类型不仅定义了数据元素的内容，而且还定义了这类数据上可以进行的运算。

#### 3. 表达式 (expression)
一个表达式产生一个运算结果，它由一个或多个运算对象和一个或多个运算符所组成！  
运算符举例：<< (输出运算符)，>> (输入运算符)，+，-，*，/ 等。

#### 4. 数据结构 (data-structure)
<font color="red">数据结构：**数据** 及 其上所允许的**操作** 的一种逻辑组合。</font>

C++ 中我们通过定义一个类(class)来定义属于自己的数据结构，一个类定义了一种类型，以及与其相关联的一组操作！

<font color="red">**类类型** 是 C++ 最初的一个重要的设计焦点</font>，它被设计出来的目的就是：让用户能够自主定义 使用上像内置类型一样自然 的类类型！

#### 5. 初始化
是指在一个对象创建的时候赋予它一个值。

未初始化的变量：即为没有赋予初值的变量，<font color="red">试图使用一个未初始化变量的值是错误的，这也是导致 bug 的常见原因</font>。

### [第一部分 C++基础](./part1-foundation.md)
### [第二部分 C++标准库](./part2-stdlib.md)
### [第三部分 类设计者的工具](./part3-tool2classDesigner.md)
### [第四部分 高级主题](./part4-advancedTopics.md)

## 
### 附录
#### 1. 标准库 及其 头文件
#### 2. 算法概览
#### 3. 随机数

## 
### C++ 11 新特性
序号 | 新特性 | 序号 | 新特性
:---: | :----- | :---: | :----- |
1 | long long 类型 | 2 | 列表初始化
3 | nullptr 字面值常量 | 4 | constexpr 常量表达式
5 | typedef 类型别名 | 6 | auto 类型说明符
7 | 类内部的初始化 | 8 | decltype 类型说明符
9 | 范围 for 语句 (1) | 10 | 使用 auto,decltype 缩写类型
11 | 定义 vector的vector | 12 | vector对象的列表初始化
13 | 容器的 cbegin 和 cend 函数 | 14 | 标准库的 begin 和 end 函数
15 | 除法的舍入规则 | 16 | 使用 auto, decltype 简化声明
17 | 大括号包围的值列表赋值 | 18 | 将 sizeof 用作类成员
19 | 范围 for 语句 (2) | 20 | ...






