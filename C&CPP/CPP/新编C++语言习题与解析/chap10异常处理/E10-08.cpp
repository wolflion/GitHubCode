// 2017-09-29
#include <iostream>
using namespace std;

class Sample
{
public:
	Sample()
	{
		cout << "Constructor" << endl;
		throw 1;
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
	}
	catch (int)
	{
		cout << "出现异常情况" << endl;
	}
}