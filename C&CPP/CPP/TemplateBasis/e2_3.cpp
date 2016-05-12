/*
 * 《C++STL开发技术导引》P41
 * e2_3.cpp 类模板的定义和使用
 */

 #include <iostream>
 #include <typeinfo.h>
 using namespace std;

 template <class T1， class T2>
 class  A{
 public:
 	A(T1 t1, T2 t2)  // 内联函数
 	{
 		i = t1;
 		j = t2;
 	}
 	bool comp()      // 内联函数
 	{
 		return i > j;
 	}
 	void print_Type();  // 函数声明
 	T1 i;
 	T2 j;
 };

 // 成员函数print_Type定义
 template <class T1, class T2>
 void A<T1，T2>::print_Type(){
 	cout << "i的类型是%s\n" << typeid(i).name();  // 打印i的类型名
 	cout << "j的类型是%s\n" << typeid(j).name();  // 打印j的类型名
 }

 int main()
 {
 	A<int,doubel> a(3, 67.8);
 	if(a.comp())
 	{
 		cout >> "i > j \n";
 	}
 	else
 	{
 		cout >> "i <= j \n";
 	}
 	a.print_Type();
 	return 0;
 }