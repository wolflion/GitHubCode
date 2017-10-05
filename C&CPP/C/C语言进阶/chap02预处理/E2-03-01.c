//20171005
#include <stdio.h>
#include <stdlib.h>
#define  INT_P int*

#define  N 10;   // 用到N的地方会替换成"10;"

#define STR  "Hello World!"
int main()
{
	int i, j;
	int a[9];
	INT_P p;
	//INT_P p,p1; //定义多个变量时，转换成int *p,p1，这样p1就是一个整型变量。

	for (i = 0; i < 9;i++)
	{
		a[i] = i + 1;
	}

	for (j = 0, p = a; p < a + 9;p++)
    //for (j = 0, p1 = a; p1 < a + 9;p1++)
	{
		printf("a[%d]=%d\t", j++, *p);
		//printf("a[%d]=%d\t", j++, *p1);
		if (0 == j % 3)
			printf("\n");
	}

	//printf("N的值为：%d\n", N);

	char *STRING = "This is a string!!!";
	printf("字符串中的宏%s\n", "STR!");
	printf("字符串中的宏:STR和不在字符串的宏:%s\n", STR);
	printf("出现在字符串变量名中的宏:%s\n", STRING);

	system("pause");
	return 0;
}