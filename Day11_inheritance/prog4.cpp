

#include<iostream>
using namespace std;
class car
{
	public:
		void display1()
		{
			cout<<"car"<<endl;
		}
	protected:
		void disp()
		{
			cout<<"protected car"<<endl;
		}
};

class fuelcar: public car
{
	public:
		void display2()
		{
			cout<<"fuel car"<<endl;
			display1();
			disp();
		}
	protected:
		void disp2()
		{
			cout<<"protected fuel car"<<endl;
		}
		
};

class electriccar: public car
{
	public:
		void display3()
		{
			cout<<"Electric car"<<endl;
			display1();
			disp();
		}
	protected:
		void disp3()
		{
			cout<<"protected electric car"<<endl;
		}
		
};

class hybridcar: public fuelcar, public electriccar
{
	public:
		void display4()
		{
			cout<<"hybrid car"<<endl;
			display2();
			display3();
			//display1();
			disp2();
			disp3();
			disp4();
		}
	protected:
		void disp4()
		{
			cout<<"protected hybrid car"<<endl;
		}
};

int main()
{
	//car c;
	//fuelcar f;
	//electriccar e;
	hybridcar h;
	//c.display1();
	//f.display1();
	//f.display2();
	//e.display1();
	//e.display3();
	//h.display1();
	//h.display2();
	//h.display3();
	h.display4();
	return 0;
}
