// e10_3.cpp
#include<iostream>
#include<algorithm>
#include<vector>
#include<iterator>
using namespace std;

int main() {
	int a[] = { 10,1,3,9,7,6,2,4,5,8 };
	vector<int>v(a, a + 10);
	cout << "ԭʼ�������ݣ�";
	copy(v.begin(), v.end(), ostream_iterator<int>(cout, "\t"));
	cout << endl;
	partial_sort(v.begin(), v.begin() + 4, v.end());
	cout << "partial_sort��ǰ4��Ԫ�ذ��������У�:";
	copy(v.begin(), v.end(), ostream_iterator<int>(cout, "\t"));
	cout << endl;
	getchar();
	return 0;
}