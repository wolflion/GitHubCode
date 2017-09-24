// 20170924

#include <iostream>
using namespace std;

int main()
{
	int max = 20;
	int min = 15;

    int a;
    cin >> a;
    // [max,min]表示的捕获变量列表，但只是值传递，变量原名
    cout << [max,min] (int x)->int
    {
    	if(x<max && x>min)
    		return 2*x;
    	else
    		return x;
    }(a)
    <<endl;

	system("pause");
	return 0;
}