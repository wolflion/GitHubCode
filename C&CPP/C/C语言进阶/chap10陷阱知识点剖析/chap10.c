/*《C语言进阶》chap10 陷阱知识点剖析*/
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/*10.1 strlen和sizeof的区别*/
#if 0
int main()
{
	char str[8] = "fdsa";
	printf("字符串的长度为:%d\n",strlen(str));//4
	printf("占用内存的大小为:%d字节\n",sizeof(str));//8
	system("pause");

	return 0;
}
#endif

#if 0
int main()
{
	char *str = "Hello"; 
	printf("strlen(str) = %d\n",strlen(str));//5
	printf("strlen(str) = %d\n",sizeof(str));//4，指针在32位计算机中占用4字节
	printf("strlen(str) = %d\n",sizeof(*str));//1 *str 表示字符串首地址的内容

	system("pause");
	return 0;
}
#endif

/*10.2 const修饰符*/
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

/*10.4 void和void*的区别*/
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

// 提示有错
#if 0
sum(int a[], int n) // 提示有错
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

/*10.5 #define和typedef的本质区别*/
#if 0
#define INT int
typedef short SHORT; //typedef需要分号

int main(void)
{
	INT a = 2;
	SHORT b = 9;
	printf("a=%d\tb=%d\n",a,b);

	system("pause");
	return 0;
}
#endif

// 弄清楚这个错的原因
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
	pa2 = pa1; //warning C4047: “=”:“int”与“int *”的间接级别不同
	pb1 = &b;
	pb2 = &pb1; //warning C4047: “=”:“PSHORT”与“PSHORT *”的间接级别不同 

	printf("*pa1=%d\t *pa2=%d\n",*pa1,*pa2); //error C2100: 非法的间接寻址 
	printf("*pb1=%d\t *pb2=%d\n",*pb1,*pb2);

	system("pause");
	return 0;
}
#endif


/*10.7 函数realloc,malloc和calloc的区别*/
#if 0
int main(void)
{
	int num = 5;
	int i;
	int *p = (int *) malloc(num * sizeof(int));
	int *p1 = (int *)calloc(num,sizeof(int));

	printf("采用malloc分配后的内存单元的数据\n");
	for (i=0;i<num;i++)
	{
		printf("%d\t",p[i]);
	}

	printf("\n采用calloc分配后的内存单元的数据\n");
	for (i=0;i<num;i++)
	{
		printf("%d\t",p1[i]);
	}

	printf("\n使用realloc函数前p的值为:%p\n",p);
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
	printf("\n\n使用realloc函数减小指针p所指向的内存单元后的p值为:%p\n",p);
	for (i=0;i<num;i++)
	{
		printf("p[%d]=%d\t",i,p[i]);
	}

	num = 6;
	p = (int *)realloc(p,num*sizeof(int));
	printf("\n\n使用realloc函数第一次扩展指针p所指向的内存单元后的p值为:%p\n",p);
	for (i=0;i<num;i++)
	{
		printf("p[%d]=%d\t",i,p[i]);
		if(0==(i+1)%3)
			printf("\n");
	}

	num = 12;
	p = (int *)realloc(p,num*sizeof(int));
	printf("\n\n使用realloc函数第二次扩展指针p所指向的内存单元后的p值为:%p\n",p);
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

/*10.8 函数和宏*/
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

/*10.10 类型转换*/
//第一个例子
#if 0
int main()
{
	unsigned short i = 0;
	unsigned short n = 0;
	while(i < n-1)  // 0 < -1
	{
		printf("进入while循环\n"); // 没有执行到这句
		break;
	}
	system("pause");
	return 0;
}
#endif

//第二个例子
#if 0
int main()
{
	unsigned short i = 0; 
	unsigned long n = 0;
	while(i < n-1) //i和n的类型不匹配而发生隐式类型转换  0<0xffffffff
	{
		printf("进入while循环\n"); // 执行到这句
		break;
	}
	system("pause");
	return 0;
}
#endif




