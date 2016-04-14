

#include <iostream>
#include "TravelStrategy.h"

using namespace std;

//http://www.cnblogs.com/jiese/p/3181099.html  ���������ú�ѧѧ
int main()
{
	TravelStrategy* travel = NULL;
	ContextPerson* person = NULL;
	//�ﳵȥ����
	travel = new BicycleStrategy();
	person = new ContextPerson(travel);
	person->Do();

	//�ɻ�ȥ����
	travel = new AirPlanelStrategy();
	person = new ContextPerson(travel);
	person->Do();

	//��ȥ����
	travel = new TrainStrategy();
	person = new ContextPerson(travel);
	person->Do();

	system("pause");
}