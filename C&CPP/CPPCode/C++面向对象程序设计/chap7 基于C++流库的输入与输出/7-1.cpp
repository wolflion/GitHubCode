/*
 * ����n��nΪ��ֵ����n!,��ֵ��cerr��ʾ������Ϣ��
 */

#include <process.h>
#include <iostream>
using namespace std;

int main()
{
	int num;
	cin >> num;
	unsigned long factor = 1; // ����һ���ײ���
	if (num >= 0)
	{
		for (int i=num; i >= 1; i--)
		{
			factor *= i;
		}
		cout << factor << endl;
	}
	else
	{
		cerr << "Invalid minus number! \n";
		exit(1);  // �����ǰ�Լ�д�����á�
	}

	system("pause");
	return 0;
}