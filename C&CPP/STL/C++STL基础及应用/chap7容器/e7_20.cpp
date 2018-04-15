// e7_20.cpp
#include<iostream>
#include<queue>
#include<algorithm>
#include<iterator>
using namespace std;

int main() {
	int a[] = { 1,2,3,4,5,6,7,8,9,10 };
	priority_queue<int>pr(a, a + 9);// 通过构造函数将a[0]~a[8]送入优先队列
	//priority_queue<int,less<int>>pr(a, a + 9);  // 与上面的等价
	pr.push(a[9]); // 通过操作函数将a[9]送入优先队列

	cout << "进队顺序：";
	copy(a, a + 10, ostream_iterator<int>(cout, "\t"));
	cout << endl;

	cout << "出队顺序：";
	while (!pr.empty()){
		cout << pr.top() << "\t"; // 获得优先队列队头元素
		pr.pop();  // 删除队头元素
	}
	getchar();
	return 0;
}