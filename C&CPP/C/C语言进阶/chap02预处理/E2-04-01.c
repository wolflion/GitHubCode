// 20171004
#include <stdio.h>
#include <stdlib.h>
#define NUM 0
#define ON_OFF 0

int main(int argc, char* argv)
{
#if NUM>0
	printf("NUM的值大于0\n");
#elif NUM<0
	printf("NUM的值小于0\n");
#else
	printf("NUM的值等于0\n");
#endif

#if ON_OFF
	printf("使用条件编译命令注释掉的语句部分 \n");
#endif

	system("pause");
	return 0;
}