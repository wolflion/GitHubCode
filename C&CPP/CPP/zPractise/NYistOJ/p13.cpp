/*
 * 20160509
 * 现要你来求第n个斐波纳奇数
 */

#include <iostream>
using namespace std;

int f(int);

int main()
{
	int n;
	cin >> n; // n小于5
	int arr[10];
	int sum[10];
	for(int j=0;j<n;j++)
	{
		cin >> arr[j];
	}

	for (int j=0,m=0;j<n;j++,m++)
	{
		sum[m] = f(arr[j]);
	}

	for (int m = 0; m < n; m++)
	{
		cout << sum[m] << endl;
	}

	//system("pause");
	return 0;
}


int f(int n)
{
	int sum = 0;
	if(n == 1 || n == 2)
		sum = 1;
	else
	{
		sum += f(n-1) + f(n-2);
	}
	return sum;
}


// 这是最优的程序
# if 0
#include<stdio.h>
main()
{
	int m,n,i,s1,s2;
	scanf("%d",&m);
	while(m--)
	{
		scanf("%d",&n);
		for(i=3,s1=s2=1;i<=n;i++)
		{
			s1=s1+s2;
			s2=s1-s2;
		}
		printf("%d\n",s1);
	}
}
#endif