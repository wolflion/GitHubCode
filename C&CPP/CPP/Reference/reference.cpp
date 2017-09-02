#include <iostream>
using namespace std;
void testReference()
{
	int n = 100;
	int &rn = n;
	n++;
	cout << "n=" << n << endl;   // 101
	cout << "rn=" << rn << endl; // 101
	rn++;
	cout << "n=" << n << endl;   // 102
	cout << "rn=" << rn << endl;  // 102

	cout << endl;
}

void testPointerReference()
{
	int n =10,*pn = &n,*&rn = pn;
	(*pn)++;
	cout << "n=" << n << endl;   // 11
	(*rn)++; 
	cout << "n=" << n << endl;  // 12

	cout << endl;
}

void RefParm(int a[],int n, int &max, int &min)
{
	// 引用传递参数
	max = min = a[0];
	for(int i= 1;i<n;i++)
	{
		if(max<a[i])
			max =a[i];
		if(min>a[i])
			min = a[i];
	}
}

void testRefParm()
{
	int a[10]={2,5,2,9,0,8,6,1,7,4};
	int max,min;
	RefParm(a,10,max,min);
	cout<<"Max:" << max << endl;  // 9
	cout << "Min:" << min << endl; // 0
	cout << endl;
}

#pragma region 对象引用作为函数参数
#pragma endregion

#pragma  region 引用返回值
#pragma  endregion

#pragma region 常引用
class Sample
{
	int n;
public:
	Sample(int i)
	{
		n = i;
	}
	int getn() const {return n;}
};

int add (const Sample &s1, const Sample &s2)
{
	int sum =s1.getn()+ s2.getn();
	return sum;
}

void testadd()
{
	Sample s1(100),s2(200);
	cout << "sum=" << add(s1,s2) << endl;  // 300
	cout << endl;
}
#pragma endregion 


void main()
{
	testReference();
	testPointerReference();
	testRefParm();
	testadd();
	system("pause");
}