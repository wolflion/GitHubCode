// 2017-10-05

#include <stdio.h>
#include <stdlib.h>

int main()
{
	enum nu1{
		a,
	};
	{  // 如果不加这个括号，就存在a重定义的问题，因为他们在同一个作用域。
	enum nu2{
		a,
	};
	}

	system("pause");
	return 0;
}