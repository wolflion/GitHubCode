/*
 * 20160425
 * e5_7.cpp �ϲ���ͬ���͵����ݵ��ַ���
 */

#include <iostream>
#include <string>
using namespace std;

int main(int argc, char* argv[])
{
	string s1 = "this";
	string s2 = "that";
	if (s1 > s2)
	{
		cout << "s1>s2" << endl;
	}
	if (s1 == s2)
	{
		cout << "s1=s2" << endl;
	}
	if(s1 < s2)
	{
		cout << "s1<s2" << endl; 
	}
	system("pause");
	return 0;
}