// 20170924

#include <iostream>
using namespace std;

// 定义两个数据类型成员的类模板
template<typename T1,typename T2>
class MyTraits
{
public:
	typedef T1 my_Type1;
private:
	typedef T2 my_Type2;
};

int main(int argc,char *argv[])
{
	// 类型成员属于静态成员，类名与成员名之间分隔符为::
	typename MyTraits<int,double>::my_Type1 a = 100;
	// 是不是就等价于 typename MyTraits::my_int a = 100; // typename用于表示区分
	cout << "a=" << a << endl;
	system("pause");
	return 0;
}