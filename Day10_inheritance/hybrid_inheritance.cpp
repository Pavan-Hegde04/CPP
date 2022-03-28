#include<iostream>
using namespace std;
class car
{
	public:
		void display1()
		{
			cout<<"car"<<endl;
		}
};

class fuelcar: public car
{
	public:
		void display2()
		{
			cout<<"fuel car"<<endl;
		}
};

class electriccar: public car
{
	public:
		void display3()
		{
			cout<<"Electric car"<<endl;
		}
};

class hybridcar: public fuelcar, public electriccar
{
	public:
		void display4()
		{
			cout<<"hybrid car"<<endl;
		}
};

int main()
{
	car c;
	fuelcar f;
	electriccar e;
	hybridcar h;
	c.display1();
	f.display1();
	f.display2();
	e.display1();
	e.display3();
	//h.display1();
	h.display2();
	h.display3();
	h.display4();
	return 0;
}
