//e6_2.cpp

#include<iostream>
#include<algorithm>
#include<functional>
#include<vector>
using namespace std;

template<class _inPara, class _outPara>

class CSum :public unary_function<_inPara, _outPara> // 从unary_function基类派生
{
public:
	_outPara sum; // sum定义成_outPara类型
	CSum() { sum = 0; }
	void operator()(_inPara n)
	{
		sum += n;
	}
	_outPara GetSum() { return sum; }
};

int main()
{
	vector<int> v;
	for (int i = 1; i <= 100; i++)
	{
		v.push_back(i);
	}
	CSum<int, int>sObj = for_each(v.begin(), v.end(), CSum<int, int>());
	cout << "sum(int)=" << sObj.GetSum() << endl;

	vector<float> v2;
	float f = 1.3f;
	for (int i = 1; i <= 99; i++)
	{
		v2.push_back(f);
		f += 1.0f;
	}
	CSum<float, float>sObj2 = for_each(v2.begin(), v2.end(), CSum<float, float>());
	cout << "sum(float)=" << sObj2.GetSum() << endl;
	getchar();
	return 0;
}