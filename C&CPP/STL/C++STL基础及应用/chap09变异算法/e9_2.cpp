// ������ʾ��

#include<iostream>
#include<vector>
#include<iterator>
#include<algorithm>
using namespace std;

int main()
{
	int a = 10;
	int b = 20;
	
	cout << "ԭʼ���� a=" << a << "\tb=" << b << endl;
	swap(a, b);
	cout << "���������� a=" << a << "\tb=" << b << endl << endl;
	
	// ������������
	int a2[5] = { 1,2,3,4,5 };
	int b2[5] = { 6,7,8,9,10 };
	cout << "ԭʼa2[5]=";
	copy(a2, a2 + 5, ostream_iterator<int>(cout, "\t"));
}