// 20171004
#include <stdio.h>
#include <stdlib.h>
#define NUM 

int main(int argc, char* argv)
{
#ifdef NUM
	printf("NUM已经定义过了 \n");  // output
#else
	printf("NUM没有定义过 \n");
#endif

#undef NUM      // 取消了接下来的作用域中NUM宏的作用
#ifndef NUM
	printf("NUM没有定义过 \n");  // output
#else
	printf("NUM已经定义过了 \n");
#endif // !NUM


	system("pause");
	return 0;
}