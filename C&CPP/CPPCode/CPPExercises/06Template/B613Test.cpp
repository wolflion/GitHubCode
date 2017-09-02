// 20170902
// 6.13 类模板的定义中有一个静态数据成员。

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

int Sample<int>::n=0;  //Sample<int>模板类的静态数据成员n赋初值
double Sample<double>::n=0.0; //Sample<double>模板类的静态数据成员n赋初值

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