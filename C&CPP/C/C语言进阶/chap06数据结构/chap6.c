/*《C语言进阶》chap6 数据结构*/
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

/*6.1 枚举类型的使用及注意事项*/
#if 0
enum Bool{
	True,
	False
};

enum Bool is_number(char c)
{
	if( c >= '0' && c <= '9')
		return True;
	else
		return False;
};

//int main()
void main()
{
	char c;
	enum Bool ret;
	while(1)
	{
		printf("\n请输入:");
		c = getchar();
		putchar(c);
		ret = is_number(c);
		if(ret)
			printf("\n输入的是数字字符！");
		else
			printf("\n输入的是非数字字符！");
	}
	return ;
}
#endif

#if 0
enum answ{
	Yes,
	No,
	Error
};

enum answ answer()
{
	enum answ ans;
	char c;
	printf("\n请输入你的选择：");
	c = getchar();
	putchar(c);
	if('Y' == c || 'y' == c)
		ans = Yes;
	else if('N' == c || 'n' == c)
		ans = No;
	else
		ans = Error;

	return ans;
};

//int main()
void main()
{
	enum answ ans;
	while(1)
	{
		ans = answer();
		if(ans == Yes)
			printf("\n你的选择是Yes！");
		else if (ans == No)
			printf("\n你的选择是No！");
		else
			printf("\n输入有误！");
	}
	return ;
}
#endif 

//6.1-4 枚举和共用体的区别
#if 0
void main()
{
	enum compass{
		East,
		South,
		West,
		North
	}a,b;
	printf("枚举类型占用的内存大小为：%d个字节\n",sizeof(enum compass));
	printf("枚举类型变量a占用的内存大小为：%d个字节\n",sizeof(a));
	printf("枚举类型变量b占用的内存大小为：%d个字节\n",sizeof(b));
	printf("枚举类型变量a的地址为：%d\n",&a); // 共用体类型的变量占用同一片内存区域，a和b占用的是不同的内存区域
	printf("枚举类型变量b的地址为：%d\n",&b);

	system("pause");
	return;
}
#endif 


/*6.4 */