/*
 * 20160425
 * e5_5.cpp �ַ�����ѯ���������÷�
 */

#include <iostream>
#include <sstream>
using namespace std;

int main(int argc, char* argv[])
{
	string s = "what's your name?my name is TOM. How do you do?Fine,thanks. ";
	// ��Դ����ʼλ��Ϊ0��������"your"�ַ���λ��
	int n = s.find("your");
	cout << "the first your pos:" << n << endl;
	// ��Դ����ʼλ��Ϊ15��������"your"�ַ���λ��
	n = s.find("you",15);
	cout << "the first your pos begin from 15:" << n << endl;
	// ��Դ����ʼλ��Ϊ0�����β���ÿ���ַ����������������ַ�������"abcde"�У��򷵻ظ��ַ���λ�á�
	n = s.find_first_of("abcde");
	cout << "find pos when character within abcde:" << n << endl;
	// ��Դ����ʼλ��Ϊ3�����β���ÿ���ַ����������������ַ�������"abcde"�У��򷵻ظ��ַ���λ�á�
	n = s.find_first_of("abcde",3);
	cout << "find pos beign from 2 when character within abcde:" << n << endl;
	system("pause");
	return 0;
}