// 2017-09-05
// 4-2 基类building

#include <iostream>
using namespace std;

class Building
{
protected:
	int floors;
	int rooms;
	double square;
};

class house:Building
{
private:
	int bedrooms;
	int balcony; //阳台
public:
	house(int f,int r,double sq,int br,int bal)
	{
		floors = f;
		rooms = r;
		square = sq;
		bedrooms = br;
		balcony = bal;
	}
	void show()
	{
		cout << "floors：" << floors <<endl;
		cout << "rooms：" << rooms << endl;
		cout << "square measure：" << square << endl;
		cout << "bedrooms：" << bedrooms << endl;
		cout << "balcony：" << balcony << endl;
	}
};

class office : public Building
{
private:
	int phones;
	int meeting_rooms
public:
	office(int f, int r, double sq, int p,int mee)
	{
		floors = f;
		rooms = r;
		square = sq;
		phones = p;
		meeting_rooms = mee;
	}
	void show()
	{
		cout << "floors：" << floors << endl;
		cout << "rooms：" << rooms << endl;
		cout << "square measure：" << square << endl;
		cout << "phones：" << phones << endl;
		cout << "meeting_rooms：" << meeting_rooms << endl;
	}
};

int main()
{
	house hou(6,120,5000,100,80);
	office off(12,80,12000,140,18);
	cout << "House：\n";
	hou.show();
	cout << "\n Office：\n";
	off.show();
	return 0;
}