// 20170902 

// 4-1-14一直到4-1-19都是读代码输结果


#include <stdio.h>
#include <stdlib.h>

// 4-1-14 输出结果
void Read4114()
{
	int i,a[10];
	for (i=9;i>=0;i--)
	{
		a[i]=10-i;//a[9]=1,a[0]=10
	}
	printf("%d%d%d\n",a[2],a[5],a[8]); // 852

}

//4-1-15
void Read4115()
{
	int m[][3]={1,4,7,2,5,8,3,6,9};
	int i,k=2;
	for (i=0;i<3;i++)
	{
		printf("%d",m[k][i]); // 3 6 9  二维数组中，第3行的数据
	}
	printf("\n");  // self added
}

//4-1-16

//4-1-17

//4-1-18
void Read4118()
{
	int b[3][3]={0,1,2,0,1,2,0,1,2},i,j,t=1;
	for (i=0;i<3;i++)
	{
		for (j=i;j<=i;j++)
		{
			t =t+b[i][b[j][j]];  // 这个得算一下
		}
	}
	printf("%d\n",t);
}

//4-1-19
void Read4119()
{
	float a[3]={0,0};
	int i;
	// a[3]是个初始值，其实我很好奇a[2]是什么值，如果a[1]为0的话
	printf("%d,%d\n",a[1],a[2]);  // self added


	for(i=0;i<3;i++)
		//scanf("%d",a[i]);// 这一行有错，应该是修改后的&a[i]
		scanf("%d",&a[i]);
	for(i=1;i<3;i++)
		a[0]=a[0]+a[1];
	printf("%f\n",a[0]);
}


int main()
{
	Read4114();
	Read4115();
	Read4118();
	Read4119();
	//system("pause");
	getchar();
	return 0;
}