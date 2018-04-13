#include <iostream>
#include <valarray>

using namespace std;

template <typename T> void printValarray(const valarray<T>& va)
{
	for(int i=0;i<va.size();i++)
		cout <<va[i]<<" ";
	cout << endl;
}

int main()
{
	valarray<int> va1(4);  // 包含4个元素，但没有初始化
	printValarray(va1);
	valarray<int> va2(3,4);  // 包含4个元素，其数值均为3; 
	printValarray(va2);
	return 0;
}