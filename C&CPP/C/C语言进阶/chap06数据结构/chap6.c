/*��C���Խ��ס�chap6 ���ݽṹ*/
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

/*6.1 ö�����͵�ʹ�ü�ע������*/
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
		printf("\n������:");
		c = getchar();
		putchar(c);
		ret = is_number(c);
		if(ret)
			printf("\n������������ַ���");
		else
			printf("\n������Ƿ������ַ���");
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
	printf("\n���������ѡ��");
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
			printf("\n���ѡ����Yes��");
		else if (ans == No)
			printf("\n���ѡ����No��");
		else
			printf("\n��������");
	}
	return ;
}
#endif 

//6.1-4 ö�ٺ͹����������
#if 0
void main()
{
	enum compass{
		East,
		South,
		West,
		North
	}a,b;
	printf("ö������ռ�õ��ڴ��СΪ��%d���ֽ�\n",sizeof(enum compass));
	printf("ö�����ͱ���aռ�õ��ڴ��СΪ��%d���ֽ�\n",sizeof(a));
	printf("ö�����ͱ���bռ�õ��ڴ��СΪ��%d���ֽ�\n",sizeof(b));
	printf("ö�����ͱ���a�ĵ�ַΪ��%d\n",&a); // ���������͵ı���ռ��ͬһƬ�ڴ�����a��bռ�õ��ǲ�ͬ���ڴ�����
	printf("ö�����ͱ���b�ĵ�ַΪ��%d\n",&b);

	system("pause");
	return;
}
#endif 


/*6.4 */