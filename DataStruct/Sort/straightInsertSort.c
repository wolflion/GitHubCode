/*
 * 20160420
 * ֱ�Ӳ�������
 * created by lionel
 */

# if 0
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
# endif


/*
 * 20160510
 */
#include <iostream>
using namespace std;
int main()
{
	int a[] = {98,76,109,34,67,190,80,12,14,89,1};
	int len = sizeof(a)/sizeof(a[0]);
	int j;
	// ֻ��stdio.h�����޷���for()�ﶨ��int j,��iostream�ﻹ�ǿ��Ե�
	// ѭ���ӵ�2��Ԫ�ؿ�ʼ
	for (int i=1;i<len;i++)
	{
		// ��1��Ԫ�� ���� ��2��Ԫ��
		if(a[i] < a[i-1])
		{
			int temp = a[i];
			for(j=i-1;j>=0;&&a[j]>temp;j--)
			{
				a[j+1]=a[j];
			}
			a[j+1]= temp;
		}
	}

	for(int f=0;f<len;f++)
	{
		cout << a[f] << " ";
	}

	system("pause");
	return 0;
}
