// 20171004
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv)
{
#pragma pack(push) // 加不加这行，不影响最后结果；其作用是保存当前默认的字节对齐方式
#pragma pack(2)   // 设置2字节对齐
	struct _stu1
	{
		char name[20];
		char num[10];
		int score;
		char sex;
	}stu1;

	printf("stu1占用内存的大小为：%d个字节\n",sizeof(stu1)); // 36

	//#pragma pack() 取消之前设置的字节对齐方式，采用默认的4字节对齐
#pragma pack(pop)  // 恢复默认的字节对齐方式

	struct _stu2
	{
		char name[20];
		char num[10];
		int score;
		char sex;
}stu2;

	printf("stu2占用内存的大小为：%d个字节\n",sizeof(stu2));  // 40
	system("pause");
	return 0;
}