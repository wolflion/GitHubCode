/************************************************************************/
/* 实现                                                                     */
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

void ContextPerson::Do()  //不写返回值，默认是int
{
	this->travelStrategy->travelAlgorithm();
}