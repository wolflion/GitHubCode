/*
 * 20160424
 * 例1.3 函数模板的实现
 * 例1.4 如何使用函数模板
 * created by lionel
 */

#include <iostream>
using namespace std;

template <typename T>
T const& max_element(T const *l, unsigned sz)
{
	T const *max_value(l);
	for (unsigned i = 1; i < sz; ++i)
	{
		if(l[i] > *max_value)
			max_value = &(l[i]);
	}
	return *max_value;
}

int main()
{
	int l[] = {2, 0, 1, 1, 0, 8, 2, 5};
	char cl[] = "August";

	// int l[]
	cout << max_element<int>(l,8) << endl;
	// char cl[]
	cout << max_element<char>(cl,8) << endl;

	system("pause");
	return 0;
}


