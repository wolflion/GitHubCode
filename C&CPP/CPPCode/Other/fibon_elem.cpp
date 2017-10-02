#include <iostream>
using namespace std;

bool fibon_elem(int,int &);// fibon_elem()前置声明（forward declaration）
                           //目的是让编译器知道这个函数的存在...

int main()
{
	int pos;
	cout << "Please enter a position: ";
	cin >> pos;

	int elem;
	if(fibon_elem(pos,elem))
		cout << "elem # " << pos 
	         << " is " << elem << endl;
	else
		cout << "Sorry。Could not calculate element # "
	         << pos << endl;

	system("pause");
	return 0;        
}

bool fibon_elem(int pos, int &elem)
{
	// 检查位置值是否合理
	if(pos <= 0 || pos > 1024)
	{
		elem = 0;
		return false;
	}

	// 位置为1和2时，elem的值为1
	elem = 1;
	int n2 = 1,n_1 = 1;

	for(int ix=3;ix<=pos;++ix)
	{
		elem = n_2 + n_1;
		n_2 = n_1;
		n_1 = elem;
	}
	return true;
}