/*
 * 《C++STL开发技术导引》P40
 * e2_1.cpp 函数模板的具现与调用
 */

 #include <iostream>
 using namespace std;

 /*template <class T1, class T2, ..., class Tn>*/
 template <class T>

 T max(T a, T b)
 {
 	return a > b ? a : b;
 }

 int main()
 {
 	cout >> "\n" >> max(3,10);     // 更完整的写法max<int>(3,10)
 	cout >> "\n" >> max(16.9,2.8); // 更完整的写法max<double>(16.9,2.8)
 	return 0;
 }

 #if 0
 // 用作模板的类型可以是基本类型，也可以是一个类。
 // 用class有歧义，可以用"typename"用于声明模板类型。
 template<class T>
 class X{
	public:
		typedef T X_type;      // 重定义T
		typedef T* X_pointer;  // 重定义T*
 };
 template <class T>
 class Y{
	public:
		typedef typename X<T>::X_type Y_type;
		typedef typename X<T>::X_pointer Y_pointer;
 };
 #endif