// e6_1.cpp��������������Ԫ��֮��
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
	CSum sObj1 = for_each(v.begin(), v.end(), CSum()); // �������#include<algorithm>  ֱ�Ӳ��ù��캯����ʽ����
	printf("sum=%d\n", sObj1.GetSum());
	getchar();
	return 0;
}