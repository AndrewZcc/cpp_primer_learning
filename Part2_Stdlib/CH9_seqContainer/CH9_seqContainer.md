### CH9 顺序容器 (sequence container)
> · 本章是 [第三章 字符串，向量和数组](../../CH3_String_Vector_Arrays/ch3_string_vector_arrays.md) 内容的扩展。  
> · 容器(container) 就是 一些特定类型对象的集合。

#### 9.1 顺序容器概述
1. 顺序容器有哪些？
![](seqcontainerType.jpg)
	- 这些容器都在性能方面做出了折中考虑：是要 更低的`添加删除元素代价` 还是 要更低的`访问非顺序元素的代价`；
	- 新标准库对数据结构的性能已经做了很好的优化，所以<font color="blue">现代C++程序应该使用标准库容器</font>，而不是执着于使用那些自定义的更为原始的数据结构。
	- 通常，**使用`vector`顺序容器就是一个很好的选择**，除非你有更好的理由去选择其他容器！
	- 注意，`array`容器是新引入的，它的构造比较特别：它必须同时指定容器的类型和大小，且大小不允许再变，比如：`array<int, 10> arr; ✅` `array<int> arr; ❌`
	
2. 选择顺序容器 主要也是考虑 “你是要更好的随机访问元素” 还是 “更需要在容器中插入更多的元素”！

## 
#### 9.2 容器库概览
1. 本节主要介绍 对所有容器都适用 的操作，本章其他节介绍 仅对顺序容器适用的操作，[11章 关联容器](./CH11_assContainer/ch11_asscontainer.md) 将介绍 关联容器所特有的操作。

	```
	Container c(c1);
	Container c(iter begin, end);
	Container c{a, b, c ...};		// 列表初始化
	```

2. 迭代器范围 精确定义（左闭合区间）`[begin, end)`。这样定义的好处在于：一旦我们知道了 `begin = end`，那么我们也就确信了该容器为空了。

3. `begin, end` vs. `rbegin, rend` vs. `cbegin, cend`
	
	- `begin, end`
	- `rbegin, rend` = **reverse** begin, **reverse** end 反向迭代器
	- `cbegin, cend` = **const** begin, **const** end 常量迭代器
	
4. 只有顺序容器才支持的接受大小的构造函数
	
	```
	Container c(n);			// 构造一个包含 n 个元素的顺序容器
	Container c(n, t);		// 构造一个包含 n 个元素且初值均为 t 的容器
	||
	vector<int> vec1(10, -1);	// 10个元素的容器(初始化均为-1)
	vector<int> vec2(10); 		// 10个元素的容器(初始化均为默认值0)
	vector<int> vec3{10, -1};	// 2 个元素的容器，使用花括号的代表 列表初始化。
	```
	❗️注意：<font color="red">只有顺序容器的构造函数才支持接受大小参数，关联容器并不支持</font>！
	
5. 使用`关系运算符`来比较两个容器，实际上是在进行元素的逐对比较，这些比较的具体工作方式 其实与比较两个`string`的机制相同。

## 
#### 9.3 顺序容器操作


#### 9.4 vector 对象 是如何增长的
#### 9.5 额外的 string 操作
#### 9.6 容器 的 适配器

## 
END [back](../../part2-stdlib.md)
## 
