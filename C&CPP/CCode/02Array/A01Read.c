// 20170902 

// 4-1-14һֱ��4-1-19���Ƕ���������


#include <stdio.h>
#include <stdlib.h>

// 4-1-14 ������
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
		printf("%d",m[k][i]); // 3 6 9  ��ά�����У���3�е�����
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
			t =t+b[i][b[j][j]];  // �������һ��
		}
	}
	printf("%d\n",t);
}

//4-1-19
void Read4119()
{
	float a[3]={0,0};
	int i;
	// a[3]�Ǹ���ʼֵ����ʵ�Һܺ���a[2]��ʲôֵ�����a[1]Ϊ0�Ļ�
	printf("%d,%d\n",a[1],a[2]);  // self added


	for(i=0;i<3;i++)
		//scanf("%d",a[i]);// ��һ���д�Ӧ�����޸ĺ��&a[i]
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