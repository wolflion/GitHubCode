// 20171004
#include <stdio.h>
#include <stdlib.h>
#define STR	 

int main(int argc, char* argv)
{
	printf("学习#pragma 命令中message参数的使用！\n");

#ifdef STR
	#pragma message("STR 已经定义过了")
#endif

	system("pause");
	return 0;
}