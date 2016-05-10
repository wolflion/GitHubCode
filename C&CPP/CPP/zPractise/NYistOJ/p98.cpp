/*
 * 20160510
 * 输入一个百分制的成绩M，将其转换成对应的等级
 */

#include <iostream>
using namespace std;

int main()
{
	int nLine,arrScore[10];
	cin >> nLine; // <10

	for(int i = 0; i < nLine; i++)
	{
		cin >> arrScore[i];
	}

	for(int i = 0; i < nLine; i++)
	{
		// if(90 <= arrScore[i] <= 100)  最开始的,逻辑表达式的值
		if(arrScore[i] >= 90)
		{
			cout << "A" << endl;
		}
		else if(arrScore[i] >= 80)
		{
			cout << "B" << endl;
		}
		else if(arrScore[i] >= 70)
		{
			cout << "C" << endl;
		}
		else if(arrScore[i] >= 60)
		{
			cout << "D" << endl;
		}
		else
		{
			cout << "E" << endl;
		}
	}

    system("pause");
	return 0;
}