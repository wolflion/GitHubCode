// 20170902
// 6.11 ����ģ��ȿ�����**����ģ��**���أ��ֿ�����**�Ǻ���ģ��**���ء�

#include <iostream>
#include <string>
using namespace std;
template <class T>
T max(T x, T y)  //����ģ��
{
	return(x>y?x:y);
}

char *max(char *x,char *y)  //�Ǻ���ģ��
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