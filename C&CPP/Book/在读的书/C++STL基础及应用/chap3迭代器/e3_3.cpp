/*
 * 20160427
 * e3_3.cpp ����ostream_iterator����Ļ�������
 */

#include <iostream>
#include <iterator>
using namespace std;

int main(int argc, char* argv)
{
	cout << "�����������ʾ���Ϊ��";

	// ������׼���������
	ostream_iterator<int>myout(cout,"\t");
	*myout = 1;
	myout++;
	*myout = 2;
	myout++;
	*myout = 3;

	system("pause");
	return 0;
}