/*
 * ���룺һ����
 * ����������г�10��������2�η������η�
 */

#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int iInputNum;
	const int iNum = 10; 
	cin >> iInputNum;

	for (int i=0;i < iNum; i++)
	{
		// cout << iInputNum+i << " " << (iInputNum+i)*(iInputNum+i) << " " << (iInputNum+i)*(iInputNum+i)*(iInputNum+i) << endl;
		cout << iInputNum+i << " " << (int)(pow((double)(iInputNum+i),2)) << " " << (int)(pow((double)(iInputNum+i),3)) << endl;
	}
	
	return 0;
}

/*
 * ����˼����
 * 1. �Ƿ���long���͸��ã�-2147483648��2147483647��
 * 2. cout<<long(i)*i*i; �� cout<<long(i*i*i)��ʲô����
 * 3. ���η������η���Ӧ����ѧ������double pow(double x,double y);��
 * 4. cout << " ";�����÷�����Ҫ��
 */