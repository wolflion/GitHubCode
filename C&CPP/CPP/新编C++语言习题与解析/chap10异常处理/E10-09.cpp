// 2017-09-28
#include <iostream>
using namespace std;

class Sample
{
public:
	Sample()
	{
		cout << "Constructor" << endl;
	}
	~Sample()
	{
		cout << "Destructor" << endl;
	}
};

int main()
{
	try
	{
		Sample s;
		throw 1;
	}
	catch (int)
	{
		cout << "出现异常情况" << endl;
	}
}