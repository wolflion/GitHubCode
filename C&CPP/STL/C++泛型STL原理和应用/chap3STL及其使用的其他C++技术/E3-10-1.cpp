// 20170924

#include <iostream>
using namespace std;

int main()
{
	int max = 20;
	int min = 15;

    int a;
    cin >> a;
    // 捕获变量的引用传递
    cout << [&max,min] (int x)->int
    {
    	if(x<max && x>min)
        {
            max += 10;
    		return max;
        }
    	else
        {
            max += 100;
    		return max;
        }
    }(a)
    <<endl;

	system("pause");
	return 0;
}