/************************************************************************/
/* 策略类                                                               */

#include <iostream>
using namespace std;

//策略基类
class TravelStrategy
{
public:
	virtual void travelAlgorithm()= 0;//纯虚函数
};

//具体策略类 
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

//策略是通过 委托 的方式，实现了 算法 的异构  {Strategy与Template的区别}
class ContextPerson
{
public:
	ContextPerson(TravelStrategy*);
	void Do();
private:
	TravelStrategy* travelStrategy;
};

	
