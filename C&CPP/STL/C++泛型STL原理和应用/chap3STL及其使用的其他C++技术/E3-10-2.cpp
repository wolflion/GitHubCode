// 20170924

#include <iostream>
using namespace std;

int main()
{
	int max = 20;
	int min = 15;

    int a;
    cin >> a;
    
    cout << "lambda中的max=" 
    << [max,min] (int x)mutable->int
    {
    	if(x<max && x>min)
    		return max+=10;
    	else
    		return max+=100;
    }(a)
    <<endl; // lambda中的max值变了

    cout << "外部的max=" << max << endl;  // 外部的max值没变

	system("pause");
	return 0;
}