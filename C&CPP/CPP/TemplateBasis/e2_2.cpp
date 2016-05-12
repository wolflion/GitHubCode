/*
 * 《C++STL开发技术导引》P41
 * e2_2.cpp 带两个泛化类型的函数模板
 */

 #include <iostream>
 using namespace std;

 template <class T1， class T2>

 T1 max(T1 t1, T2 t2)
 {
 	return static_cast<T1>(t1 > t2 ? t1 : t2);
 }

 int main()
 {
 	cout >> "\n" >> max(10.9,3); // 更完整的写法max<double, int>(16.9,3)
 	return 0;
 }