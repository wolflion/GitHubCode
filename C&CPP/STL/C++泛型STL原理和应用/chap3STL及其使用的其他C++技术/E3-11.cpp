// 20170924

#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
	// 用大括号对向量进行初始化的方式
	vector<int>v{10,3,5,8,2,6,7,9,34,23};
	// 以lambda表达式的功能，实现了逐个输出到屏幕上
	for_each(v.begin(),v.end(),[](int n){cout << n << " ";});
	cout << endl;
	system("pause");
	return 0;
}