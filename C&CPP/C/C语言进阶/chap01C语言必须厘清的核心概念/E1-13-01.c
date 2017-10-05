// 2017-10-05

#include <stdio.h>
#include <stdlib.h>


	struct _data
	{
		char a:6;
		char b:2;
		char c:7;
	}data;

int main()
{

	printf("位域变量data起始地址为：%d\n", &data);
	printf("位域变量data占用内存大小为 %d 字节\n", sizeof(data));  // 2个字节，原因是6+2正好是8，7占用1个。

	system("pause");
	return 0;
}