// 20171004
#include <stdio.h>
#include <stdlib.h>
#define  N 1

int main(int argc, char* argv)
{
	int a = 3;
	int const b = 3 ;  // const定义的常量也不行?
#if(a)
	printf("#if后面的表达式为变量\n");
#endif

#if(b)
	printf("#if后面的表达式为常量\n");
#endif

#if(N)
	printf("#if后面的表达式已定义，且不为0--success\n");
#else
	printf("#if后面的表达式已定义，且不为0--fail\n");
#endif

	/**
#if(sizeof(a))  // error C1017: 无效的整数常量表达式	
	printf("#if后面的表达式含有sizeof操作符\n");
#endif
	*/

	system("pause");
	return 0;
}