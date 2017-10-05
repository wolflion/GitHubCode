// 20171005
#include <stdio.h>
#include <stdlib.h>

#define N 9

int main()
{
	int i, a[N];
	for (i = 0; i < N;i++)
	{
		a[i] = i;
		printf("a[%d]=%d\t", i, a[i]);
		if ((i + 1) % 3 == 0)
			printf("\n");
	}

//#undef N   // 使用了这一行，N就变成未声明的标识符
	printf("%d\n", N);  //error C2065: “N”: 未声明的标识符

	system("pause");
	return 0;
}