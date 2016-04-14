/************************************************************************/
/* ������                                                               */

#include <iostream>
using namespace std;

//���Ի���
class TravelStrategy
{
public:
	virtual void travelAlgorithm()= 0;//���麯��
};

//��������� 
class AirPlanelStrategy:public TravelStrategy
{
public:
	void travelAlgorithm();
};

class TrainStrategy:public TravelStrategy
{
public:
	void travelAlgorithm();
};

class BicycleStrategy:public TravelStrategy
{
public:
	void travelAlgorithm();
};

//������ͨ�� ί�� �ķ�ʽ��ʵ���� �㷨 ���칹  {Strategy��Template������}
class ContextPerson
{
public:
	ContextPerson(TravelStrategy*);
	void Do();
private:
	TravelStrategy* travelStrategy;
};

	
