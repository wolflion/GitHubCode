/*
 * 20160420
 * ֱ�Ӳ�������
 * created by lionel
 */

#include <stdio.h>
#include <stdlib.h>
#define LEN 6

void insertSort(int a[LEN],int n)
{
	// for()�ﲻ�ܶ�����ʱ����
	int i,j,f;
	// ѭ���ӵ�2��Ԫ�ؿ�ʼ
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

	// ���
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

