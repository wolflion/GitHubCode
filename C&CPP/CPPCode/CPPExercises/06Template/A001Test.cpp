// 20170902
// 6-1 ����һ��min()����ģ�壬�ܽ������ֲ���

#include <iostream>
using namespace std;
template <class T>  // ģ���������T

T min(T arg1, T arg2 ,T arg3)  // ������������T
{
	T v;   // ����������T
	if((arg1 <arg2)&&(arg2<arg3))
		v = arg1;
	else if((arg2 <arg1)&&(arg2<arg3))
		v = arg2;
	else
		v = arg3;
	return v;
}

int main()
{
	cout << "min(100,200,300)="<<min(100,200,300)<<endl;
	cout << "min(2.345,1.234,3.456)="<<min(2.345,1.234,3.456)<<endl;
	cout << "min('c','a','b')="<<min('c','a','b')<<endl;
	system("pause");
	return 0;
}