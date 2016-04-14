/************************************************************************/
/* ʵ��                                                                     */
/************************************************************************/
#include <iostream>
#include "TravelStrategy.h"
using namespace std;

void AirPlanelStrategy::travelAlgorithm()
{
	cout << "travelbyAirPlain"<<endl;
}

void TrainStrategy::travelAlgorithm()
{
	cout << "travelbyTrain"<<endl;
}

void BicycleStrategy::travelAlgorithm()
{
	cout << "travelbyBicycle"<<endl;
}

ContextPerson::ContextPerson(TravelStrategy* travelStrategy)
{
	this->travelStrategy = travelStrategy;
}

void ContextPerson::Do()  //��д����ֵ��Ĭ����int
{
	this->travelStrategy->travelAlgorithm();
}