//virtual base class public and protected

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

class fuelcar: virtual public car
{
	public:
		void display2()
		{
			cout<<"fuel car"<<endl;
		}
	protected:
		void disp2()
		{
			cout<<"protected fuel car"<<endl;
		}
		
};

class electriccar: public virtual car
{
	public:
		void display3()
		{
			cout<<"Electric car"<<endl;
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
			disp();
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
	hybridcar h;
	h.display1();
	h.display2();
	h.display3();
	h.display4();
	/*h.disp();
	h.disp2();
	h.disp3();
	h.disp4();*/
	return 0;
}
