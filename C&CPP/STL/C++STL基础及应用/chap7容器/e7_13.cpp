// e7_13.cpp

#include<iostream>
#include<list>
using namespace std;

typedef list<int> LISTINT;

int main()
{
	LISTINT t1;
	t1.push_back(1);
	t1.push_back(5);
	t1.push_back(3);
	t1.push_back(10);

	LISTINT t2;
	t2.push_back(2);
	t2.push_back(8);
	t2.push_back(6);
	t2.push_back(9);

	t1.sort();
	t2.sort();

	// 问题：在merge是不是要排序，同时排序是引用排序，还是啥？
	//t1.splice(t1.begin(),t2);  //2 6 8 9 1 3 5 10
	// 试了一下，如果没有t1.sort()，直接用merge()竟然报错？
	t1.merge(t2);   // 1 2 3 5 6 8 9 10

	for (LISTINT::iterator it = t1.begin(); it != t1.end(); it++)
	{
		cout << *it << "\t";
	}
	cout << endl;
	cout << t1.size() << "\t" << t2.size() << endl;// 8 0 

	getchar();
	return 0;

	// https://blog.csdn.net/doctor_feng/article/details/11966271 [将两个list链表通过merge合并时注意的三个问题]
}