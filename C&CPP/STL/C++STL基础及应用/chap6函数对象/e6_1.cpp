// e6_1.cpp　求整型向量各元素之和
#include<vector>
#include<algorithm>
using namespace std;

class CSum
{
private:
	int sum;
public:
	CSum() { sum = 0; }
	void operator()(int n)
	{
		sum += n;
	}
	int GetSum()
	{
		return sum;
	}
};

int main()
{
	vector<int>v;
	for (int i = 1; i < 100; i++)
	{
		v.push_back(i);
	}
	CSum sObj1 = for_each(v.begin(), v.end(), CSum()); // 必须包含#include<algorithm>  直接采用构造函数形式调用
	printf("sum=%d\n", sObj1.GetSum());
	getchar();
	return 0;
}