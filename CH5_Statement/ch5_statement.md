### CH5 语句
## 
> - 本章致力于介绍：C++所提供的 一组控制流(flow-of-control)语句 以支持复杂的执行路径！  
> - 本章介绍的主要包括：简单语句，复合语句(语句块)，条件语句，循环语句，跳转语句，异常处理机制 等。

## 
#### 5.1 简单语句
1. 注意：别漏写分号，也别多写分号；
2. 用一对花括号括起来的语句，被称作语句块，也就是所谓的 `复合语句`，我们可以把 `复合语句`看做是一条语句，但是这条语句并不需要以分号作为结束。
	
#### 5.2 语句的作用域
- 在控制结构内的语句块内定义的变量，只能在该语句块内可见！一旦该复合语句结束(也即程序运行到了代码块外)，该变量也就失效了。

#### 5.3 条件语句

1. `if` 条件语句
	- 经典问题：`悬垂 else 问题` 当 if 分支 多于 else 分支 时，我们怎么知道某个给定的 else 到底是和哪个 if 语句匹配呢？
		* 解决方案：<font color="red">就 C++ 而言，它规定 else 与离它最近的尚未匹配的 if 匹配，从而消除了程序的二义性</font>！
	
	- 为了解决 if-else 分支匹配不正确的问题，<font color="blue">强烈建议：程序员将所有 if 和 else 分支下的语句都用花括号括起来</font>！也即：**使用花括号来控制执行路径，避免出现执行路径的错误**。
	
2. `switch` 条件语句
	- 注意：`case 标签 必须是整型常量表达式`，switch 语句只能处理整型的匹配！
	
	- ❗️**要特别注意 switch内部的控制流**：
		* 如果某个 case标签 匹配成功，将从该标签开始往后顺序执行所有的 case分支，除非程序显式地中断了这一过程，否则 运行直到switch的结尾处才会停下来！
		* <font color="red">一般不要省略 case分支 最后的break语句，如果没写break语句，最好要加一段注释 来说明程序的执行逻辑！</font>
		* 因为 `漏写 break语句 容易引发重大软件缺陷`！
	
	- 注意 switch语句内部的变量定义 问题：“如果被略过的代码中含有 变量的定义 该肿么办？”
		* 答案是：<font color="blue">C++规定，不允许 跨过变量的初始化语句直接跳转到该变量作用域内的其他另一位置</font>！
		* 也即：如果在某处一个 带有初值的变量 位于作用域外，另一处 该变量位于作用域内，则从前一处跳转到后一处的行为是**非法**的！

#### 5.4 循环语句
1. `while` 循环
	- 形式：`while (condition) statement`。
	- 当我们不确定到底要迭代多少次时，使用 while 循环 就比较合适！
	
2. `传统 for` 循环
	- 形式：`for (init-statement; condition; expression) statement`。
	- 注意：如果 condition 的第一次求值结果就是 `false`, 则 statement 就一次也不会被执行！
	
3. `范围 for` 循环
	- 形式：`for (declaration : expression) statement`。
	- 注意：其中 expression 必须是一个序列。
	- 技巧：declaration 部分必须要确保与expression里的元素类型一致，`确保类型一致`最简单的方法就是：<font color="red">使用 `auto` 类型说明符，让编译器帮我们去指定正确的类型</font>！
	
4. `do while` 循环
	- `do while` 与 `while` 唯一的区别就在于：其先执行循环体，后检查条件！
	- 注意另一个重要的区别：<font color="red">do while 语句要在结束位置使用一个分号作为结尾</font>！

#### 5.5 跳转语句 (用于中断当前控制流)

1. 跳转语句的作用是：中断当前的执行过程！

2. `break` 语句
	- break 语句 只能出现在 迭代语句 或 switch语句 内部，它的作用也仅限于：离他最近的循环或者是switch。
	
3. `continue` 语句
	- 作用是：终止最近的循环中的当前迭代，并立即开始下一次迭代！
	
4. `goto` 语句
	- 建议：虽然 C++语言中支持`goto 语句` (无条件跳转)，**但请不要在程序中使用它，因为它使得程序既难以理解又难以修改**！

5. `return` 语句【详见 6.3】

#### 5.6 try 语句 与 异常处理

1. 异常是指存在于运行时的反常行为！C++ 提供 `throw 表达式，try 语句块，一套异常类` 用来处理异常。

2. `throw` 表达式
	- 结合 异常类，抛出异常信息。 
	
	```
	if (item1.isbn() != item2.isbn())
		throw runtime_error("Data must refer to same ISBN.");
	```
	
3. `try` 语句块
	- 用法：
	
	```
	int x;
	try {
		// program-statements
		x = 2;
		int y = 3;
		throw exception;
	} catch (exception-declaration){
		// handler-statements
		cout << x << endl;	// ✅
		cout << y << endl;	// ❌
	} catch (exception-decla2) {
		handler-statements
	} ...
	
	cout << x << endl;		// ✅
	cout << y << endl;		// ❌
	```
	- 特别注意：*try 语句块内声明的变量在块外部是无法访问的，而且甚至是在 catch子句内也无法访问*。
	
4. `标准库 异常类 #include <exception>`
	- 每个标准异常类 都定义了名为 what() 的成员函数，这些函数没有参数，返回的则是C风格字符串。

## 
END [Back](../part1-foundation.md)
## 