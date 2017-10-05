// 20171005

// 传址 swap()和main()中都实现了交换。
#include <stdio.h>
#include <stdlib.h>

void swap(int *p1, int *p2)
{
	printf("\n*p1和*p2交换前\n");
	printf("*p1=%d\t*p2=%d\n", *p1, *p2);

	int temp;
	temp = *p1;
	*p1 = *p2;
	*p2 = temp;

	printf("\n*p1和*p2交换后\n");
	printf("*p1=%d\t*p2=%d\n", *p1, *p2);

	return;  // void类型，其实啥也不写挺好
}


int main()
{
	int a, b;
	a = 20;
	b = 30;
	printf("调用swap()函数之前\n");
	printf("a=%d\tb=%d\n", a, b);

	swap(a, b);

	printf("调用swap()函数之后\n");
	printf("a=%d\tb=%d\n", a, b);

	system("pause");
	return 0;
}