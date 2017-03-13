##  2.3 使用变量
+ **C#不允许隐式变量声明。**

##  2.4 使用基元数据类型
+ **C#不允许使用未赋值的变量。** Definite Assignment Rule
+ `PrimitiveDataTypes`的例子

##  2.5 使用算术运算会
+ `MathsOperators`的例子
+ System.Int32.Parse()
	+ `string stringVar = "42"; int intVar = System.Int32.Parse(stringVar);`
+ *操作符的结合性* （操作符*和/都具有左结合性）。
	+ `int myInt; int myInt2; myInt2=myInt=10;`

## 2.6 变量递增和递减
+ count++返回递增发生前的count值（*先返回它现在的值，然后再递增；*）
+ ++count返回递增发生后的count值 (*先对x进行递增，再将新值作为表达式的值返回*)

## 2.7 声明隐式类型的局部变量
+ `var myVariable=99;` //根据用于初始化变量的表达式推断变量类型
	+ **在C#中用var关键字声明变量之后，赋值变量的值的类型就固定下来，必须是初始化变量的值的类型，** *不能随便改变！。*
+ *除非万不得已，否则不要使用隐式类型的变量。*