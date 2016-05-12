/*
 * 一个数的二进制表示中有多少个1
 */

#include <iostream>
using namespace std;
int main()
{
	int iGroup; //1000
	//int *pArray = nullptr; //[1000];
	int pArray[1000]; 
	int pOut[1000];
	//int *pOut = nullptr;
	cin >> iGroup;
	// input
	for(int i=0;i<iGroup;i++)
	{
		cin >> pArray[i];
	}

	// operator
	for (int i=0;i<iGroup;i++)
	{
		int sum = 0;
		int num = pArray[i];
		while(num != 0)
		{
			if((num&1) == 1)
			{
				sum++;
			}
			num >>= 1;
		}
		pOut[i] = sum;
	}

	// output
	for (int i=0;i<iGroup;i++)
	{
		cout << pOut[i] << endl;
	}


	//system("pause");
	return 0;
}