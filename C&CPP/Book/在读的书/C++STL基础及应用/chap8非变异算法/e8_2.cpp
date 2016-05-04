/*
 * 20160504
 * e8_2.cpp �����������ĺͣ����ֵ����Сֵ��
 */

#include <iostream>
#include <algorithm>

using namespace std;

class PrintInfo
{
public:
	PrintInfo():count(0),nSum(0){}
	int GetSum() {return nSum;}
	int GetMax() {return nMax;}
	int GetMin() {return nMin;}

	void operator()(int x)
	{
		if(count == 0)
		{
			nMax = x;
			nMin = x;
		}
		else
		{
			if(nMax < x)
			{
				nMax = x;
			}
			if (nMin > x)
			{
				nMin = x;
			}
		}
		nSum += x;
		count ++;
	}
private:
	int nSum;
	int nMax;
	int nMin;
	int count;
};

int main()
{
	int A[]={1,4,2,8,5,7};
	const int N = sizeof(A)/sizeof(int);

	PrintInfo p = for_each(A,A+N,PrintInfo());

	cout << "�ܺ��ǣ�"<<p.GetSum() << endl;
	cout << "���ֵ��"<<p.GetMax() << endl;
	cout << "��Сֵ��"<<p.GetMin() << endl;

	system("pause");
	return 0;
}