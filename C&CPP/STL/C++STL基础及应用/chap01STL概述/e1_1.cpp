/*
 * 20160424
 * Àı1.1 namespaceÃüÃû¿Õ¼äÊ¾Àı
*/

#include <iostream>
namespace mycompany
{
	void func()
	{
		std::cout << "Hello, this is my company" << std::endl;
	}
}

namespace yourcompany
{
	void func()
	{
		std::cout << "Hello, this is your company" << std::endl;
	}
}

using namespace mycompany;
using namespace std;

int main(int argc, char* argv[])
{
	func();
        printf("\n");
	//std::cout << std::endl;

	yourcompany::func();
        printf("\n");
	//cout << endl ;

	system("pause");
	return 0;
}
