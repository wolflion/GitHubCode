// e10_1.cpp  copy��ʾ��
#include<iostream>
#include<vector>
#include<iterator>
#include<algorithm>
using namespace std;

bool myless(int &m, int &n)
{
	return m > n;
}

int main(int argc, char* argv[])
{
	int a[] = { 1,8,6,10,4 };
	vector<int> v(a, a + 5);
	sort(v.begin(), v.end());
	cout << "������������: " << endl;
	copy(v.begin(), v.end(), ostream_iterator<int>(cout, "\t"));

	sort(v.begin(), v.end(), myless);
	//sort(v.begin(), v.end(), greater<int>());
	cout << "������������: " << endl;
	copy(v.begin(), v.end(), ostream_iterator<int>(cout, "\t"));
	getchar();
	return 0;
}