// 20170902
// 6.11 函数模板既可以与**函数模板**重载，又可以与**非函数模板**重载。

#include <iostream>
#include <string>
using namespace std;
template <class T>
T max(T x, T y)  //函数模板
{
	return(x>y?x:y);
}

char *max(char *x,char *y)  //非函数模板
{
	if (strcmp(x,y) >= 0)
	{
		return x;
	}
	else
	{
		return y;
	}
}

int main()
{
	cout << max(2,5)<<endl;
	cout << max(3.12,4.12)<<endl;
	cout<<max("China","Beijing")<<endl;
	system("pause");
	return 0;
}