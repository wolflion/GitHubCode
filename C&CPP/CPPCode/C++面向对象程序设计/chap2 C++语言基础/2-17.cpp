/*
 * 2.17 ����һ����̬�������飬��newΪ�����ռ�͸�ֵ������ʾ���� 
 */

#include <iostream>
using namespace std;
class examp
{
	int i,j;
public:
	void init(int a, int b)
	{
		i = a;
		j = b;
	}
	int product()
	{
		return i*j;
	}
};

int main()
{
	examp *ptr;
	int i;
	ptr = new examp[6];
	if(!ptr)
	{
		cout << "Allocation error.\n";
		return 1;
	}
	for(i=0;i<6;i++)
	{
		ptr[i].init(i,i);
	}
	for(i=0;i<6;i++)
	{
		cout << "Product["<<i<<"]is:";
		cout << ptr[i].product()<<"\n";
	}
	delete []ptr;
	system("pause");
	return 0;
}
