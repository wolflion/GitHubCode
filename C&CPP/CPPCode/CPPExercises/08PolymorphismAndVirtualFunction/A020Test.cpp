// 20170901
// 5-20 ��������ת��������Location������ת�������͡�

#include <iostream>
using namespace std;

class Location
{
private:
	int A,B;
public:
	Location(int i,int j)
	{
		A = i;
		B = j;
	}
	operator int()  // ��������ת��������������ת��������ʲô�����أ�
	{
		return A*B;
	}
};

int main()
{
	Location op1(2,3),op2(4,-3);
	int i;
	i = op1;  // ��������ת������  ����Location���͵�op1ת������int���͵�i��
	cout << i << "\n";
	i=200+op2;
	cout << i<<"\n";
	system("pause");
	return 0;
}