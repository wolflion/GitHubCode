/*
 * 20160425
 * e5_8.cpp �����������ַ�������ת��
 */

#include <iostream>
#include <sstream>
#include <sstream>
using namespace std;

int main(int argc, char* argv[])
{
	// ������10ת�����ַ���"10"
	int n1 = 10;
	string s1;
	stringstream os1; // ����stringstream���м�ý��
	os1 << n1;
	os1 >> s1;
	cout << "����10ת�����ַ���10:" << s1 << endl;

	// ���ַ���"123"ת��������123
	int n2 = 0;
	string s2 = "123";
	stringstream os2;
	os2 << s2;
	os2 >> n2;
	cout << "���ַ���123ת��������123:" << n2 << endl;

	system("pause");
	return 0;
}