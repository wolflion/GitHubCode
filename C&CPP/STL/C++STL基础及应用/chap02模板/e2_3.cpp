// �ļ�����e2_3.cpp
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

	//int GetSum(int times)//times:��������
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

	//float GetSum(float times)//���㱶��
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
//	cout<<"���������3���ǣ�"<<intary.GetSum(3)<<endl;
//	cout<<"���������3.2���ǣ�"<<fltary.GetSum(3.2f)<<endl;
//	return 0;
//}


//���ϴ������ͨ������ģ����
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
	cout<<"���������3���ǣ�"<<c1.GetSum(intary,3)<<endl;
	cout<<"���������3.2���ǣ�"<<c2.GetSum(fltary,3.2f)<<endl;
}

//traits����