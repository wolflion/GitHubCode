// 20170902
// 6.13 ��ģ��Ķ�������һ����̬���ݳ�Ա��

#include <iostream>
using namespace std;
template <class T>

class Sample
{
	static T n;
	T x;
public:
	Sample(T i)
	{
		x = i;
		n+=x;
	}
	void disp()
	{
		cout << "x=" << x << ",n="<< n <<endl;
	}
};

int Sample<int>::n=0;  //Sample<int>ģ����ľ�̬���ݳ�Աn����ֵ
double Sample<double>::n=0.0; //Sample<double>ģ����ľ�̬���ݳ�Աn����ֵ

int main()
{
	Sample<int> s1(2),s2(5);
	s1.disp();
	s2.disp();
	Sample<double> s3(2.4),s4(5.9);
	s3.disp();
	s4.disp();

	system("pause");
	return 0;
}