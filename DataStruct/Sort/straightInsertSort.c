/*
 * 20160420
 * 直接插入排序
 * created by lionel
 */

#include <stdio.h>
#include <stdlib.h>
#define LEN 6

void insertSort(int a[LEN],int n)
{
	// for()里不能定义临时变量
	int i,j,f;
	// 循环从第2个元素开始
	for (i = 1; i < LEN; i++)
	{
		if(a[i] < a[i-1])
		{
			int tmp = n;
			for(j=i-1;j>0&&a[j]>tmp; j--)
			{
				a[j+1] = a[j];
			}
			a[j+1] = tmp;
		}
	}

	// 输出
	for (f=0; f<LEN; f++)
	{
		printf("%d\n",a[f]);
	}
}

int main()
{
	int arr[LEN] = {1,2,4,10,15};
	insertSort(arr,30);

	system("pause");
	return 0;
}

