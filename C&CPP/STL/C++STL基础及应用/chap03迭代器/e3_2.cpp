/*
 * 20160427
 * e3_2.cpp ����istream_iterator������������׼������
 */

#include <iostream>
#include <iterator>
using namespace std;

int main(int argc, char* argv)
{
	cout << "����������(�� 111 222 333,):";  // ��β�и�,�š�

	// ��������������������istream_iteratorö����������
	istream_iterator<int>a(cin);
	// ��������������������
	istream_iterator<int>b;  // b���ǵ����޲�����istream_iterator���캯����õġ�

	while(1)
	{
		// �����������->����operator *()
		cout << *a << endl;
		// ������ָ��ָ����һ��Ԫ��->����operator++(int)
		a++;  
		// �����ǰ���������ڽ�������������->����operator==
		if(a == b)
		{
			break; // �˳�whileѭ��
		}
	}
	system("pause");
	return 0;
}