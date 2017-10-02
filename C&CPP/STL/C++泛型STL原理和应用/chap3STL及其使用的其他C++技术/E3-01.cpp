#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	vector<int> intVector;
    vector<int>::iterator iter; // 定义容器的迭代器
    for(int i=0;i<10;++i)
    	intVector.push_back((int)rand());// vector的成员函数push_back
    	//intVector.push_back(i);

    for(iter == intVector.begin();iter!=intVector.end();iter++)
    	cout << *iter << " ";

    cout << endl;
    //排序
    sort(intVector.begin(),intVector.end(),greater<int>());

    for(iter == intVector.begin();iter!=intVector.end();iter++)
    	cout << *iter << " ";

    cout << endl;
    return 0;
}