// 20170901
// 5-21 利用类型转换函数将stringc类类型转换成一般的字符串类型。

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
	operator char*()  // 类型转换函数
	{
		return str;
	}
};

int main()
{
	stringc s("This is a test\n");
	char *ptr1,*ptr2,s1[50];
	ptr1 = s; // 转换成字符串
	cout << "Here is string1: " << ptr1 << "\n";
	ptr2 = (char *)s;
	cout << "Here is string2: " << ptr2 << "\n";
	strcpy(s1,s);// 原型是char* strcpy(char *s1,char *s2); 这个对象s时会自动调用类型转换函数将stringc对象转换成char*。
	cout << "Here is copy of string: " << s1 << "\n";
	system("pause");
	return 0;
}