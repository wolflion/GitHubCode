// 20170901
// 5-21 ��������ת��������stringc������ת����һ����ַ������͡�

#include <iostream>
#include <string>
using namespace std;

class stringc
{
private:
	char str[50];
public:
	stringc(char *s)
	{
		strcpy(str,s);
	}
	operator char*()  // ����ת������
	{
		return str;
	}
};

int main()
{
	stringc s("This is a test\n");
	char *ptr1,*ptr2,s1[50];
	ptr1 = s; // ת�����ַ���
	cout << "Here is string1: " << ptr1 << "\n";
	ptr2 = (char *)s;
	cout << "Here is string2: " << ptr2 << "\n";
	strcpy(s1,s);// ԭ����char* strcpy(char *s1,char *s2); �������sʱ���Զ���������ת��������stringc����ת����char*��
	cout << "Here is copy of string: " << s1 << "\n";
	system("pause");
	return 0;
}