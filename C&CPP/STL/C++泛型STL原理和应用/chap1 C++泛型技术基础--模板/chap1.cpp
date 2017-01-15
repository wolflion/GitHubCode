#include <iomanip>
#include <iostream>
#include <cmath>
#include <malloc.h>
#include <conio.h>
using namespace std;

// 1.1.2 ����ģ������
#if 0
template <typename T>
T maxt(T x, T y)
{
	return (x > y) ? x : y;
}

int main()
{
	cout << maxt <int>(4,6)<<endl;  // �൱��û��ʹ�õ�template�ĺô���ͬʱ<int>����ʡ��
	cout << maxt <double>(6.98,5.33) << endl;
	// fun525();
	system("pause");
	return 0;
}
#endif

// 1.1.2 ��ģ������
#if 0
#define  PI 3.14159

template <typename T>
class Circle
{
private:
	T radius;
public:
	Circle(T r);
	T Area();
};

int main()
{
	Circle<int> circle_1(10);
	cout << circle_1.Area() << endl;

	Circle<double>circle_2(12.786);
	cout << circle_2.Area() << endl;
	system("pause");
	return 0;
}

// ��ģ����ʵ�ֵ����Ա����
template<typename T> // ����Ҳ��Ҫ����
Circle<T>::Circle(T r)
{
	radius = r;
}

template<typename T> // ����Ҳ��Ҫ����
T Circle<T>::Area()
{
	return PI * radius * radius;
}
#endif

// 1.1.3 decltype���ʽ
#if 0
template<typename T, typename U>
auto Multiply(T t, U u)->decltype(t*u) 
{
	return t*u;
}

int main()
{
	auto v = Multiply(20,45.89);
	cout << "v="  << v << endl;
	system("pause");
	return 0;
}
#endif