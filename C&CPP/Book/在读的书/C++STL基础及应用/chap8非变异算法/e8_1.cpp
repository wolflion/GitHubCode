/*
 * 20160504
 * e8_1.cpp 打印向量中每个整型元素的立方
 */

 #include <iostream>
 #include <vector>
 #include <algorithm>
 using namespace std;

 void PrintCube(int n)  // 打印n的立方
 {
 	cout << n * n * n << " ";
 }

 int main()
 {
 	const int VECTOR_SIZE = 8;
 	typedef std::vector<int> IntVector; // 为向量类起一个别名
 	typedef IntVector::iterator IntVectorIt;// 为向量类迭代器起一个别名

 	IntVector Numbers(VECTOR_SIZE); // 初始化向量类，大小为VECTOR_SIZE
 	IntVectorIt start,end,it;  // 定义向量类迭代指针

 	for(int i=0;i<VECTOR_SIZE;i++) // 通过数组方式给向量类赋值
 		Numbers[i] = i + 1;

	start = Numbers.begin(); // start表示迭代器起始指针
	end = Numbers.end();     // end表示迭代器结束指针

	cout << "Numbers { ";   // 打印向量中的各个元素

	for(it = start;it != end; it++)
		cout << *it << " ";

	cout << " }\n" << endl;

	// [start,end]间每个元素作为PrintCube的参数传入并执行
	for_each(start,end,PrintCube);  // start,end表示向量的起始，结束迭代指针，不是具体的值。 PrintCube函数有且只有一个参数，且参数类型与向量的模板类型一致。

	cout << "\n";

	system("pause");
	return 0;
 }