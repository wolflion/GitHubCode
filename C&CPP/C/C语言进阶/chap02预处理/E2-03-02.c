// 20171005
#include <stdio.h>
#include <stdlib.h>

#define SUM(x,y)  x+y 
#define SUB_ABS(x,y)  ({typeof(x)_x=x;typeof(y)_y=y;(_x)>(_y)?(_x)-(_y):(_y)-(_x);})

int main()
{
	int x = -6;
	int y = -9;

	int s = SUM(x,y);
	//int s = SUM(x,y)*10;  //如果还按之前的写法就有二义性，并且还是错的。
	int abs = SUB_ABS(++x, y);

	printf("x+y的值为：%d\n", s);
	printf("++x和y之差的绝对值为:%d\n", abs);

	system("pause");
	return 0;
}