/*
 * 20160425
 * e5_3.cpp �ַ����������
 */

#include <iostream>
#include <sstream>
using namespace std;

int main(int argc, char* agrv[])
{
	string s = "do";
	cout << "Inition size is:" << s.size() << endl;
	// ��1��������������Դ����λ�ã��ڶ���λ�ñ���Ҫ������ַ���
	s.insert(0,"How");  
	// Դ�ַ���β��׷�Ӹ��ַ���
	s.append("you");
	// ����+ʵ���ַ��������ӣ��Ӷ������µ��ַ���
	s = s + "do?";

	cout << "final size is:" << s.size() << endl;
	cout << s;

	system("pause");
	return 0;
}