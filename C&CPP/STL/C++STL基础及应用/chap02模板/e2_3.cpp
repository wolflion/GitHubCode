// 文件名：e2_3.cpp
#include <iostream>
using namespace std;
class CIntArray{
	int a[10];
public:
	CIntArray()
	{
		for (int i=0; i < 10; i++)
		{
			a[i] = i + 1;
		}
	}

	//int GetSum(int times)//times:整数倍数
	//{
	//	int sum = 0;
	//	for (int i=0; i<10; i++)
	//	{
	//		sum += a[i];
	//	}
	//	return sum*times;
	//}
};

class CFloatArray
{
	float f[10];
public:
	CFloatArray()
	{
		for(int i=1;i<=10;i++)
		{
			f[i-1] = 1.0f/i;
		}
	}

	//float GetSum(float times)//浮点倍数
	//{
	//	float sum = 0.0f;
	//	for(int i=0; i<10; i++)
	//	{
	//		sum += f[i];
	//	}
	//	return sum*times;
	//}
};

//int main()
//{
//	CIntArray intary;
//	CFloatArray fltary;
//	cout<<"整型数组和3倍是："<<intary.GetSum(3)<<endl;
//	cout<<"浮点数组和3.2倍是："<<fltary.GetSum(3.2f)<<endl;
//	return 0;
//}


//以上代码可以通过定义模板类
template<class T>
class CApply
{
public:
	float GetSum(T& t,float inpara)
	{
		return t.GetSum(inpara);
	}
};

void main()
{
	CIntArray intary;
	CFloatArray fltary;
	CApply<CIntArray>c1;
	CApply<CFloatArray>c2;
	cout<<"整型数组和3倍是："<<c1.GetSum(intary,3)<<endl;
	cout<<"浮点数组和3.2倍是："<<c2.GetSum(fltary,3.2f)<<endl;
}

//traits技术