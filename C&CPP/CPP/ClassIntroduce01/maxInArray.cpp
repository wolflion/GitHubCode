/*
 * 20160424
 * 例8.4 找出一个整型数组中的元素的最大值
 * created by lionel
 */

#include <iostream>
using namespace std;

class Array_max{
public:
	void set_value();  // 对数组元素设置值
	void max_value();  // 找出数组的最大元素
	void show_value(); // 输出最大值
private:
	int array[10]; 
	int max;       // max用来存放最大值
};

void Array_max::set_value()
{
	int i;
	for (i=0; i<10; i++)
	{
		cin >> array[i];
	}
}

void Array_max::max_value()
{
	int i;
	max = array[0];
	for (i=1; i<10; i++)
	{
		if(array[i] > max)
			max = array[i];
	}
}

void Array_max::show_value()
{
	cout << "max=" << max << endl;
}

int main()
{
	Array_max arrmax;
	arrmax.set_value();
	arrmax.max_value();
	arrmax.show_value();
	system("pause");
	return 0;
}