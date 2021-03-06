##  内容
###  10.1 什么是运算符重载
+ 计算机对整数、单精度数和双精度数的加法操作过程是很不同的。但C++对运算符 **"+"**进行了重载，所以“+”就能适用于int,float,double类型的运算。
+ **“<<”** 是位移运算符，但输出操作中又是与流对象cout配合使用的流插入运算符。
+ 例10.1 通过函数来实现复数相加（未用运算符重载）

###  10.2 运算符重载的方法
+ **运算符重载的函数**，运算符重载本质是函数的重载。
+ 重载运算符的函数一般格式： `Complex operator+(Complex &c1, Complex &c2);`
+ 例10.2 改写例10.1 ，重载运算符“+”，使之能用于两个复数相加。
    + `return Complex(real+c2.real,imag+c2.imag);`  建立一个临时对象，它没有对象名，是一个无名对象。在建立临时对象过程中调用构造函数。return语句将此临时对象作为函数返回值。
    + **编译系统根据运算符两侧（或一侧）的数据类型决定用运算符的具体哪种功能。**

###  10.3 重载运算符的规则
+ **只能对已有的C++运算符进行重载**
+ **`. * :: sizeof ?:`不能重载**
    + 前两个不能重载是为了保证访问成员的功能不被改变
    + 域运算符::和sizeof运算符的运算对象是类型，而不是变量或一般表达式，不具备重载的特征。
+ **重载不能改变操作数的个数，不能改变运算符的优先级，不能改变运算符的结合性**
+ 重载运算符的函数不能有默认的参数
+ 重载的运算符必须和用户定义的自定义类型的对象一起使用，其参数至少应有一个是类对象（或类对象的引用）。
+ 用于类对象的运算符一般必须重载，但有两个例外“=”和“&”不必用户重载。
    + 赋值运算符=，系统已为每一个新声明的类重载了一个赋值运算符
    + 地址运算符&，它能返回类对象在内存中的起始地址。

###  10.4 运算符重载函数作为类成员函数和友元函数
+ 重载函数是Complex类的成员函数，有一个参数是隐含的，运算符函数是用this指针隐式地访问类对象的成员。
+ 既不是类的成员函数也不是友元函数的普通函数
    + 普通成员函数不能直接访问类的私有成员。*在类中定义公用的设置数据的set函数和读取数据的get函数。*
+ **问题1：** 什么时候应该用成员函数方式？什么时候应该用友元函数方式？二者有何区别？
    + 将运算符重载作为成员函数，可以通过this指针自由地访问本类的数据成员，因此可以少写一个函数的参数。但必须要求运算表达式第一个参数(即运算符左侧的操作数)是一个类对象，而且与运算符函数的类型相同。
    + 运算符重载的第一个参数不是类对象时，最好声明为友元函数形式。
    + C++规定，有的运算符（赋值、下标、函数调用）必须定义为类的成员函数，有的运算符则不能定义为成员函数（"<<"、">>"、类型转换运算符）
    + 一般将单目运算符重载为成员函数，将双目运算符重载为友元函数。

###  10.5 重载双目运算符
+ 例10.4 定义一个字符串类String，用来存放不定长的字符串，重载运算符"==","<"和“>”，用于两个字符串的等于、小于和大于的比较运算。

###  10.6 重载单目运算符
+ 由于单目运算符只有一个操作数，因此运算符重载函数只有一个参数，如果运算符重载函数作为成员函数，则还可以省略此参数。
+ 例10.5 
    + `Time operator++() // 一元运算符重载为类成员函数的形式` 
    + `friend Time operator++(形参) // 一元运算符重载为友元函数的形式`
    + 重载时 前置自增运算符和后置自增运算符区别 **C++约定：如果在自增（自减）运算符重载函数中，增加一个int型形参，就是后置自增（自减）运算符函数。**
+ 例10.6 
    + `Time operator++(int)`

### 10.7 重载流插入运算符和流提取运算符
+ **用户自定义的类型的数据，是不能直接用“<<”和“>>”来输出和输入的。如果想用它们输出和输入自己声明的类型的数据，必须对它们重载。**`istream & operator >> (istream &,自定义类 &);` 和`ostream & operator << (ostream &,自定义类 &);`
    + *只能将重载“>>”和"<<"的函数作为友元函数或普通的函数，而不能将它们定义为成员函数。*  
+ 10.7.1 重载流插入运算符“<<”
    + 例10.7 在例10.2的基础上，用重载的“<<”输出复数。
+ 10.7.2 重载流提取运算符">>"
    + 例10.8 在例10.7的基础上，增加重载流提取运算符“>>”，用"cin>>"输入复数，用"cout<<"输出复数。 

### 10.8 不同类型数据间的转换
+ 10.8.1 标准类型数据间的转换
    + **隐式类型转换**  `int i=6; i=7.5+i;`
    + **显式类型转换**，`int(89.5)`这是C++的用法，*建议这样*。 `(int)89.5`//这是C的语法，C++支持，但不建议。
+ 10.8.2 转换构造函数 Conversion Constructor Function
    + 作用是将 **一个其它类型的数据转换成一个类的对象。**
    + 学习过的几种构造函数
        + `Complex(); // 默认构造函数`
        + `Complex(double r,double i); // 用于初始化的构造函数` *一般两个以上*
        + `Complex(Complex &c); // 用于复制对象的复制构造函数`
    + `Complex(double r) {real=r;imag=0;}` **只有一个形参**
+ 10.8.3 类型转换函数 type conversion function
    + `operator 类型名() {实现转换的语句}`
    + 例10.9 使用类型转换函数的简单例子。
    + 例10.10 包含转换构造函数、运算符重载函数和类型转换函数的程序。
