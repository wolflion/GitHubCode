// 2017-10-01
#include <iostream>
using namespace std;

int main()
{
	char *a = "BASIC"; // 字符指针指向'B'
	for (int i = 4; i >= 0; i--)
		cout.put(*(a + i)); //从最后一个字符开始输出
	cout.put('\n');

	// 也可以把cout.put()换成putchar()

	system("pause");
	return 0;
}