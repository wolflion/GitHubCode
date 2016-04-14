

#include <iostream>
#include "TravelStrategy.h"

using namespace std;

//http://www.cnblogs.com/jiese/p/3181099.html  跟这个代码好好学学
int main()
{
	TravelStrategy* travel = NULL;
	ContextPerson* person = NULL;
	//骑车去旅行
	travel = new BicycleStrategy();
	person = new ContextPerson(travel);
	person->Do();

	//飞机去旅行
	travel = new AirPlanelStrategy();
	person = new ContextPerson(travel);
	person->Do();

	//火车去旅行
	travel = new TrainStrategy();
	person = new ContextPerson(travel);
	person->Do();

	system("pause");
}