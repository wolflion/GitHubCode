/*
 * 输入n，n为正值计算n!,负值用cerr显示错误信息。
 */

#include <process.h>
#include <iostream>
using namespace std;

int main()
{
	int num;
	cin >> num;
	unsigned long factor = 1; // 定义一个阶层数
	if (num >= 0)
	{
		for (int i=num; i >= 1; i--)
		{
			factor *= i;
		}
		cout << factor << endl;
	}
	else
	{
		cerr << "Invalid minus number! \n";
		exit(1);  // 这个以前自己写都不用。
	}

	system("pause");
	return 0;
}