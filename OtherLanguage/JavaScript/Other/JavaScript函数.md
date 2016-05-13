##  起源
  《JavaScript》权威指南chap8 函数

##  内容
### 2.1 函数的定义的调用
  + 定义



  `function print(msg){document.write(msg,"<br>");}`

	 return语句没有一个相关的表达式，它会返回undefined值。
	 函数不包含return语句，返回给调用者undefined。

	
+ 嵌套的函数
+ 函数直接量 
 
### 2.3 作为数据的函数
+ 函数可以*赋值给变量*，*存储在对象的属性中*，*存储在数组的元素中*，*作为参数传递给函数*。
+ `function square(x){return x*x;}//创建了一个新的函数对象，并且把这个对象赋给了变量square。`
+ [例8-2](),同时可以看下Array.sort()的实现。

### 2.4 作为方法的函数
+ 任何用作方法的函数都被有效地传递了一个隐式的参数，即调用函数的对象。
+ 当一个函数作为函数而不是方法调用的时候，这个this关键字引用全局变量。

### 2.5 构造函数
+ **构造函数**是初始化一个对象的属性并且专门和new运算符一起使用的一个函数。

### 2.8 函数作用域和闭包
+ 词法作用域
	+ 当定义了一个函数，当前的**作用域链**(词法作用域)就保存起来，并且成为函数的内部状态的一部分。
+ 调用对象
	+ 当JavaScript解释器调用一个函数时，它首先将作用域设置为定义函数的时候起作用的那个作用域链。
+ 作为名字空间的调用对象
	+ 匿名函数
+ 作为闭包的嵌入函数
	+ **闭包**：函数对象可以通过作用域链相互关联起来，函数体内部的变量都可以保存在函数作用域内。
	+ 理解闭包首先要了解*嵌套的词法作用域规则*。 
	+ d
	`var scope = "global scope"; function checkscope(){var scope = "local scope"; function f() {return scope} return f;} checkscope()()`
	`var scope = "global scope"; function checkscope(){var scope = "local scope"; function f() {return scope} return f();} checkscope()`


### 2.9 Function()构造函数
+ 例子
	+ `var f = new Function("x", "y", "return x*y;");`//最后一个实参表示函数体。
+ 理解以下几点
	+ 允许JavaScript代码被动态地创建并且在运行时编译。
	+ 在
	+ Function()所创建的对象并不是使用词法作用域，函数体代码的编译总是会在顶层函数执行。
 