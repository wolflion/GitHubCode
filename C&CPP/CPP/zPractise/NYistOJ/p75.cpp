/*
 * 20160511
 * 输入一个日期，格式如：2010 10 24 ，判断这一天是这一年中的第几天
 */

#include <iostream>
using namespace std;

int main()
{
	int iGroup;
	int iArray[100][3]; // 接收数据
	int iOut[100];      // 保存数据
	cin >> iGroup;

	for (int i = 0 ;i < iGroup;i++)
	{
		for(int j=0;j<3;j++)
		{
			cin >> iArray[i][j];
		}
	}

	for (int i=0;i<iGroup;i++)
	{
		int nDay = iArray[i][2];
		while (iArray[i][1] >= 1)
		{
			switch(--iArray[i][1])
			{
			case 1:
			case 3: 
			case 5: 
			case 7:		
			case 8: 
			case 10: 
			case 12:
				nDay += 31;
				break;
			case 4: 
			case 6:
			case 9:
			case 11:
				nDay += 30;
				break;
			case 2:
				if ((iArray[i][0] % 4 == 0 && iArray[i][0] % 100) || iArray[i][0] % 400 == 0)//if is a leap year
				{
					nDay += 29;
				}
				else
				{
					nDay += 28;
				}
				break;
			}
		}
		for (int j=0;j<iGroup;j++)
		{
			iOut[j] = nDay;
		}
	}

	for (int k=0;k<iGroup;k++)
	{
		cout << iOut[k] << endl;
	}
	system("pause");
	return 0;
}

#if 0
#include <iostream>
using namespace std;
int main()
{
	int nTestNum;
	int nYear,nMonth,nDay;
	cin >> nTestNum;
	while (nTestNum--)
	{
		// 我每次都用数组的方式，这个有点low
		cin >> nYear >> nMonth >> nDay;
		while (nMonth >= 1)
		{
			switch (--nMonth)
			{
			case 1:
			case 3: 
			case 5: 
			case 7:		
			case 8: 
			case 10: 
			case 12:
				nDay += 31;
				break;
			case 4: 
			case 6:
			case 9:
			case 11:
				nDay += 30;
				break;
			case 2:
				if ((nYear % 4 == 0 && nYear % 100) || nYear % 400 == 0)//if is a leap year
				{
					nDay += 29;
				}
				else
				{
					nDay += 28;
				}
				break;
			}
		}
		cout << nDay << endl;
	}
	system("pause");
	return 0;
}
#endif