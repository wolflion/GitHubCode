// 20170924

#include <iostream>
using namespace std;

// My_ptr类模板声明
template<class T>
class My_ptr
{
public:
	My_ptr(T *p) :_ptr(p)  // 构造函数获得资源 
	{
		cout << "生时获得资源" << endl;
	}

	// 重载*操作符
	T& operator *()  
	{
		return *_ptr; 
	}

	// 重载->操作符
	T* operator ->()
	{
		return _ptr;
	}

	~My_ptr()  // 析构函数里释放资源 
	{
		cout << "死前释放资源" << endl;
		delete _ptr;
	}

private:
	T * _ptr;   // 裸指针
};


int main()
{
	int a = 100;
	{
		My_ptr<int>p(&a);  // 指针对象p生命期开始
		cout << "打印资源数据" << *p << endl;
	}  // 指针对象p生命期结束

	cout << "指针对象p生命期已结束" << endl;

	system("pause");
	return 0;
}