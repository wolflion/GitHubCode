// 2017-10-03

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
	char str[8] = "fdsa";
	printf("字符串的长度为：%d\n", strlen(str)); //4
	printf("占用内存的大小为：%d字节\n", sizeof(str));//str[8];=8

	char *str1 = "Hello";
	printf("strlen(str1)=%d\n", strlen(str1));//5
	printf("sizeof(str1)=%d\n", sizeof(str1));//4  指针在32位计算机中占用4字节
	printf("strlen(*str1)=%d\n", sizeof(*str1));//1  *str1 表示字符串首地址的内容

	system("pause");
	return 0;
}