// e7_12.cpp

#include<iostream>
#include<list>
using namespace std;

typedef list<int> LISTINT;

int main()
{
	LISTINT test;
	for (int i = 0; i < 5; i++)
	{
		test.push_back(i+1);
	}

	//show
	LISTINT::iterator it = test.begin();
	for (; it != test.end(); it++)
	{
		cout << *it << "\t";//12345
	}
	cout << endl;
	//reversr_show
	LISTINT::reverse_iterator rit = test.rbegin();  // 专门还有这个迭代器[逆向迭代器]
	for (; rit != test.rend(); rit++)
	{
		cout << *rit << "\t";//54321
	}
	cout << endl;
	getchar();
	return 0;
}