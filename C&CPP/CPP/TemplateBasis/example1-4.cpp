/*
 * 20160424
 * ��1.3 ����ģ���ʵ��
 * ��1.4 ���ʹ�ú���ģ��
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


