##  内容
###  4 派生和继承
####  4.1 派生类声明
`
class deriveClass:[继承方式] baseClass 
{
	派生类新增加的成员
};
`

+ 继承方式 *默认*是private 

####  4.2 派生类构成
####  4.3 派生类成员的访问属性

####  4.4 派生类构造函数和析构函数
+ **默认**的尽量不要用。系统会自动设置一个默认的构造函数，但是个空函数，不执行任何操作。
+ 简单的派生类的构造函数
	+ 对继承过来的基类成员初始化工作由派生类的构造函数承担。{ *调用基类的构造函数*}
	+ 派生类构造函数的 **写法**
	+ 执行顺序

####  4.5 多重继承
+ 声明多重继承
+ 多重继承派生类的构造函数
+ 二义性
+ 虚基类
	+ **作用：**  
		+  使得在继承间接共同基类时只保留一份成员。
	+ 初始化

####  4.6 基类和派生类的转化

####  4.7 继承与组合，以及继承的意义
+ 类的 **组合**:在一个类中以另一个类的对象作为数据成员。“has a”的关系，是横向的。
+ 通过 **继承**建立了派生类与基类的关系。"is a"的关系，是纵向的。

####  4.8 习题