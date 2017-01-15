#include <iomanip>
#include <iostream>
#include <cmath>
#include <malloc.h>
#include <conio.h>
using namespace std;

// 1.1.2 函数模板例子
#if 0
template <typename T>
T maxt(T x, T y)
{
	return (x > y) ? x : y;
}

int main()
{
	cout << maxt <int>(4,6)<<endl;  // 相当于没有使用到template的好处，同时<int>可以省略
	cout << maxt <double>(6.98,5.33) << endl;
	// fun525();
	system("pause");
	return 0;
}
#endif

// 1.1.2 类模板例子
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

// 类模板外实现的类成员函数
template<typename T> // 这里也需要定义
Circle<T>::Circle(T r)
{
	radius = r;
}

template<typename T> // 这里也需要定义
T Circle<T>::Area()
{
	return PI * radius * radius;
}
#endif

// 1.1.3 decltype表达式
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