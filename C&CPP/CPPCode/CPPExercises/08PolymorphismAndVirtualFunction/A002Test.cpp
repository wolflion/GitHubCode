// 20170901
// 5-2：分析以下程序的运行结果
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

class Building
{
protected:
	int sqMe;
	char addr[25];
public:
	Building(int, char[]);
	virtual void print1(void); //  加不加virtual的区别
};

Building::Building(int S, char A[]) :sqMe(S)
{
	strcpy_s(addr,sizeof(addr), A);
}

void Building::print1(void)
{
	cout << "The building has" << sqMe << "square meter \n";
	cout << "The building's address is " << addr << ".\n\n";
}

class Shed :public Building
{
	char useCode;
public:
	Shed(int, char[], char);
};

Shed::Shed(int S, char A[], char U) :Building(S, A), useCode(U)
{
	//
}

class House :public Building
{
private:
	int numRooms;
	float cost;
public:
	House(int, char[], int, float);
	void print1(void);
};

House::House(int S, char A[], int N, float C) :Building(S, A), numRooms(N), cost(C)
{
	//
}

void House::print1(void)
{
	cout << "The house has " << sqMe << "square meter. \n";
	cout << "The house address is " << addr << ".\n";
	cout << "The house has " << numRooms << "number of rooms. \n";
	cout << "The house cost " << cost << ".\n\n";
}

class Office :public Building
{
private:
	int zoneCode;
	float rent;
public:
	Office(int, char[], int, float);
	void print1(void);
};

Office::Office(int S, char A[], int Z, float R) :Building(S, A), zoneCode(Z), rent(R)
{
	//
}

void Office::print1(void)
{
	cout << "The office has " << sqMe << "square meter. \n";
	cout << "The office address is " << addr << ".\n\n";
	cout << "The office is zoned for " << zoneCode << "code.\n";
	cout << "The office rents for " << rent << ".\n\n";
}


int main()
{
	Building *pro[3];
	Shed aShed = Shed(102, "Beijing", 'x');
	House aHouse = House(360, "chengdu", 9, 5800.00);
	Office anOffice = Office(980, "Guilin", 'B', 780.45);//waring C4305,double到float的截断
	pro[0] = &aShed;
	pro[1] = &aHouse;
	pro[2] = &anOffice;

	for (int ctr = 0; ctr < 3; ctr++)
	{
		pro[ctr]->print1();
	}
	delete pro[0];
	delete pro[1];
	delete pro[2];
	system("pause");
	return 0;
}
