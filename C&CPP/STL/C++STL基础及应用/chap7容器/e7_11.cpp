// e7_11.cpp

#include<iostream>
#include<string>
#include<list>
using namespace std;

typedef list<string> LISTSTR;

int main()
{
	LISTSTR test;
	test.push_back("back"); // βԪ�غ�����
	test.push_front("middle");
	test.push_front("front"); // ��Ԫ��ǰ����

	cout << test.front() << endl; // ��Ԫ�ص�����
	cout << *test.begin() << endl;

	cout << test.back() << endl;  // βԪ�ص�����
	cout << *(test.rbegin()) << endl;

	test.pop_front(); // ɾ��������Ԫ��
	test.pop_back();  // ɾ������βԪ��

	cout << test.front() << endl;
	getchar();
	return 0;
}