/*��C���Խ��ס�chap10 ����֪ʶ������*/
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/*10.1 strlen��sizeof������*/
#if 0
int main()
{
	char str[8] = "fdsa";
	printf("�ַ����ĳ���Ϊ:%d\n",strlen(str));//4
	printf("ռ���ڴ�Ĵ�СΪ:%d�ֽ�\n",sizeof(str));//8
	system("pause");

	return 0;
}
#endif

#if 0
int main()
{
	char *str = "Hello"; 
	printf("strlen(str) = %d\n",strlen(str));//5
	printf("strlen(str) = %d\n",sizeof(str));//4��ָ����32λ�������ռ��4�ֽ�
	printf("strlen(str) = %d\n",sizeof(*str));//1 *str ��ʾ�ַ����׵�ַ������

	system("pause");
	return 0;
}
#endif

/*10.2 const���η�*/
#if 0
int main(int argc, char* argv[])
{
	int ss = 9;
	int * const r = &ss;
	printf("*r = %d\n",*r);//9
	printf("ss=%d\n",ss);//9
	*r = 100;
	printf("*r = %d\n",*r);//100
	printf("ss=%d\n",ss);//100

	system("pause");
	return 0;
}
#endif

/*10.4 void��void*������*/
#if 0
void print()
{
	printf("Hello Word\n");
	return ;
}

int main()
{
	print();
	system("pause");
	return 0;
}
#endif

// ��ʾ�д�
#if 0
sum(int a[], int n) // ��ʾ�д�
{
	int i,sm;
	sm = 0;
	for (i=0;i<n;i++)
	{
		sm+=a[i];
	}
	return sm;
}

int main(void)
{
	int a[4]={1,2,3,4};
	printf("%d\n",sum(a,4));

	system("pause");
	return 0;
}
#endif

/*10.5 #define��typedef�ı�������*/
#if 0
#define INT int
typedef short SHORT; //typedef��Ҫ�ֺ�

int main(void)
{
	INT a = 2;
	SHORT b = 9;
	printf("a=%d\tb=%d\n",a,b);

	system("pause");
	return 0;
}
#endif

// Ū���������ԭ��
#if 0
#define PINT int*
typedef short* PSHORT;

int main(void)
{
	int a = 4;
	short b = 9;
	PINT pa1,pa2;
	PSHORT pb1,pb2;
	pa1 = &a;
	pa2 = pa1; //warning C4047: ��=��:��int���롰int *���ļ�Ӽ���ͬ
	pb1 = &b;
	pb2 = &pb1; //warning C4047: ��=��:��PSHORT���롰PSHORT *���ļ�Ӽ���ͬ 

	printf("*pa1=%d\t *pa2=%d\n",*pa1,*pa2); //error C2100: �Ƿ��ļ��Ѱַ 
	printf("*pb1=%d\t *pb2=%d\n",*pb1,*pb2);

	system("pause");
	return 0;
}
#endif


/*10.7 ����realloc,malloc��calloc������*/
#if 0
int main(void)
{
	int num = 5;
	int i;
	int *p = (int *) malloc(num * sizeof(int));
	int *p1 = (int *)calloc(num,sizeof(int));

	printf("����malloc�������ڴ浥Ԫ������\n");
	for (i=0;i<num;i++)
	{
		printf("%d\t",p[i]);
	}

	printf("\n����calloc�������ڴ浥Ԫ������\n");
	for (i=0;i<num;i++)
	{
		printf("%d\t",p1[i]);
	}

	printf("\nʹ��realloc����ǰp��ֵΪ:%p\n",p);
	for (i=0;i<num;i++)
	{
		p[i] = i + 1;
	}
	for (i=0;i<num;i++)
	{
		printf("p[%d]=%d\t",i,p[i]);
	}

	num = 3;
	p = (int *)realloc(p,num*sizeof(int));
	printf("\n\nʹ��realloc������Сָ��p��ָ����ڴ浥Ԫ���pֵΪ:%p\n",p);
	for (i=0;i<num;i++)
	{
		printf("p[%d]=%d\t",i,p[i]);
	}

	num = 6;
	p = (int *)realloc(p,num*sizeof(int));
	printf("\n\nʹ��realloc������һ����չָ��p��ָ����ڴ浥Ԫ���pֵΪ:%p\n",p);
	for (i=0;i<num;i++)
	{
		printf("p[%d]=%d\t",i,p[i]);
		if(0==(i+1)%3)
			printf("\n");
	}

	num = 12;
	p = (int *)realloc(p,num*sizeof(int));
	printf("\n\nʹ��realloc�����ڶ�����չָ��p��ָ����ڴ浥Ԫ���pֵΪ:%p\n",p);
	for (i=0;i<num;i++)
	{
		printf("p[%d]=%d\t",i,p[i]);
		if(0==(i+1)%3)
			printf("\n");
	}

	free(p);
	free(p1);

	system("pause");
	return 0;
}
#endif

/*10.8 �����ͺ�*/
#if 0
#define dmax(x,y) x>y?x:y

int fmax(int x,int y)
{
	return x>y?x:y;
}

int main(void)
{
	int x,y;
	x = 9;
	y = 6;
	printf("dmax(x,y) = %d\n", dmax(x,y));
	printf("fmax(x,y) = %d\n", fmax(x,y));

	system("pause");
	return 0;
}
#endif

/*10.10 ����ת��*/
//��һ������
#if 0
int main()
{
	unsigned short i = 0;
	unsigned short n = 0;
	while(i < n-1)  // 0 < -1
	{
		printf("����whileѭ��\n"); // û��ִ�е����
		break;
	}
	system("pause");
	return 0;
}
#endif

//�ڶ�������
#if 0
int main()
{
	unsigned short i = 0; 
	unsigned long n = 0;
	while(i < n-1) //i��n�����Ͳ�ƥ���������ʽ����ת��  0<0xffffffff
	{
		printf("����whileѭ��\n"); // ִ�е����
		break;
	}
	system("pause");
	return 0;
}
#endif




