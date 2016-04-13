#include <iostream>
#include "Time.h"
using namespace std;

void TIME::set_time()
{
	cin >> iHour;
	cin >> iMinute;
	cin >> iSec;
}

void TIME::show_time()
{
	cout << iHour<<":"<<iMinute<<":"<<iSec<<endl;
}