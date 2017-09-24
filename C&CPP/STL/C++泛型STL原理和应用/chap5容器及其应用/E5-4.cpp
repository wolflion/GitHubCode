#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int>v1 = { 1, 6, 4, 9 };
	cout << "v1=";
	for (auto i:v1)
		cout << " " << i;
	cout << endl;

	vector<int>v2 = { 78, 89, 40, 9 };
	cout << "v2=";
	for (auto i : v2)
		cout << " " << i;
	cout << endl;

	v1 = { 8, 99, 34, 21, 67 };
	for (auto i : v1)cout << " " << i; cout << endl;

	for (auto &i : v1) i = 2 * i;
	for (auto &i : v1)cout << " " << i;
	cout << endl;

	system("pause");
	return 0;
}