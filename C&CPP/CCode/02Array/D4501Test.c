// 20170903 
// 4.5 数组作为函数参数的易错点解析    124（136/359)

#include <stdio.h>
#include <stdlib.h>

#define N 8
void sort(int arr[],int n)
{
	int i,j;
	int temp;
	int flag;
	for(i=0;i<n-1;i++)
	{
		flag = 1;
		for(j=0;j<n-i-1;j++)
		{
			if(arr[j] > arr[j+1])
			{
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
				flag = 0;	
			}
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%d\t",arr[i]);
	}
	return ;
}

int main(int argc, char const *argv[])
{
	/* code */
	int i;
	int arr[N];
	printf("排序前：\n");
	for (i = 0; i < N; i++)
	{
		/* code */
		arr[i] = rand()%100;
		printf("%d\t", arr[i]);
	}
	printf("\n排序后：\n");
	sort(arr,N);
	return 0;
}
