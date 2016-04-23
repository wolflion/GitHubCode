#include <iostream>
using namespace std;

class SINGLETON{
public:
	static SINGLETON* getInstance();
	void show();
private:
	SINGLETON(){};
	~SINGLETON(){};
	static SINGLETON* m_pInstance;
};

SINGLETON* SINGLETON::m_pInstance = NULL;

SINGLETON* SINGLETON::getInstance()
{
	if(m_pInstance == NULL)
	{
		m_pInstance = new SINGLETON();
	}
		
	return m_pInstance;
}

void SINGLETON::show()
{
	cout << "test!" << endl;
}


int main()
{
	SINGLETON* sValue = SINGLETON::getInstance();
	sValue->show();
	system("pause");
	return 0;
}