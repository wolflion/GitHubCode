/*
 * 输入：一个数
 * 输出：依次列出10个数及其2次方，三次方
 */

#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int iInputNum;
	const int iNum = 10; 
	cin >> iInputNum;

	for (int i=0;i < iNum; i++)
	{
		// cout << iInputNum+i << " " << (iInputNum+i)*(iInputNum+i) << " " << (iInputNum+i)*(iInputNum+i)*(iInputNum+i) << endl;
		cout << iInputNum+i << " " << (int)(pow((double)(iInputNum+i),2)) << " " << (int)(pow((double)(iInputNum+i),3)) << endl;
	}
	
	return 0;
}

/*
 * 进阶思考：
 * 1. 是否用long类型更好，-2147483648到2147483647？
 * 2. cout<<long(i)*i*i; 与 cout<<long(i*i*i)有什么区别？
 * 3. 二次方和三次方对应的数学函数是double pow(double x,double y);。
 * 4. cout << " ";这种用法很重要。
 */