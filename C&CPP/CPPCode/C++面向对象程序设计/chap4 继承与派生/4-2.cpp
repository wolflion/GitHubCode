/*
 *
 */

#include <iostream>
using namespace std;

class building
{
protected:
	int floors;
	int rooms;
	double square;
};

class house:public building // 默认的继承方式是啥？
{
	int bedrooms;
	int balcony;
public:
	house(int f,int r,double sq, int br, int bal)
	{
		floors = f;
		rooms = r;
		square = sq;
		bedrooms = br;
		balcony = bal;
	}
	void show()
	{
		cout << "floors:"<<floors<<'\n';
		cout << "rooms:"<<rooms<<'\n';
		cout << "square measure:"<<square<<'\n';
		cout << "bedrooms:"<<bedrooms<<'\n';
		cout << "balcony:"<<balcony<<'\n';
	}
};

class office:public building
{
	int phones;
	int meeting_rooms;
public:
	office(int f,int r,double sq, int p, int mee)
	{
		floors = f;
		rooms = r;
		square = sq;
		phones = p;
		meeting_rooms = mee;
	}
	void show()
	{
		cout << "floors:"<<floors<<'\n';
		cout << "rooms:"<<rooms<<'\n';
		cout << "square measure:"<<square<<'\n';
		cout << "telephones:"<<phones<<'\n';
		cout << "meeting_rooms:"<<meeting_rooms<<'\n';
	}
};

int main()
{
	house hou(6,120,5000,100,80);
	office off(12,80,12000,140,18);
	cout<<"House: \n";
	hou.show();
	cout << "\n Office: \n";
	off.show();
	system("pause");
	return 0;
}