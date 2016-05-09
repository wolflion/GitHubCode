/*
 * 20160509
 * 输入三个字符（可以重复）后，按各字符的ASCII码从小到大的顺序输出这三个字符。
*/


# include <iostream>
using namespace std;
int main()
{
	int n; // n Group
	cin >> n;
	// 开始把字符数组定义成整型数组了
	char arrayChar[100][20] = {0};  // 最开始提交时，把这个数组定义成[2][3]了，导致runerror
	char arraySort[100][20];
	

	for(int i = 0; i < n; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cin >> arrayChar[i][j];
		}
	}

	for(int i = 0; i < n; i++)
	{
		char one = arrayChar[i][0];
		char two = arrayChar[i][1];
		char three = arrayChar[i][2];
		char min;
		if(one > two)
		{
			min = one;
			one = two;
			two = min;
		}
		if(three < one)
		{
			arraySort[i][0] = three;			
			arraySort[i][1] = one;
			arraySort[i][2] = two;
		}
		else if (three > two)
		{
			arraySort[i][0] = one;			
			arraySort[i][1] = two;
			arraySort[i][2] = three;
		}
		else
		{
			arraySort[i][0] = one;			
			arraySort[i][1] = three;
			arraySort[i][2] = two;
		}

		cout << arraySort[i][0] << " " << arraySort[i][1] << " "  << arraySort[i][2] << endl;
	}

	// 提交到onlinejudge时，会有问题，每次提交时应该要注释掉
	system("pause");
	return 0;
}


# if 0
#include <stdio.h>
#define	SIZE 3
int main (void) {
	char n[SIZE + 1],t;
	int i,j,row;
	// printf ("请输入要判断多少行 : ");
	scanf("%d", &row);
	for(i = 0;i < row;i++) {
		fflush(stdin);
		for(j = 0;j < SIZE; j++) scanf("%c",&n[j]);
		n[3] = '\0';
		printf("%s <=> ",n);
		if(n[0] > n[1]) { t = n[0];	n[0] = n[1]; n[1] = t; }
		if(n[0] > n[2]) { t = n[0]; n[0] = n[2]; n[2] = t; }
		if(n[1] > n[2]) { t = n[1];	n[1] = n[2]; n[2] = t; }
		printf("%c %c %c\n", n[0], n[1], n[2]);
	}
	return 0;

}

#endif
