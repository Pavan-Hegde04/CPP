#include<iostream>
using namespace std;
class liquid
{
	public:
		void display1()
		{
			cout<<"liquid"<<endl;
		}
};

class fuel
{
	public:
		void display2()
		{
			cout<<"fuel"<<endl;
		}
};

class petrol: public liquid, public fuel
{
	public:
		void display3()
		{
			cout<<"petrol"<<endl;
		}
};

int main()
{
	liquid l1;
	fuel f1;
	petrol p1;
	p1.display1();
	p1.display2();
	p1.display3();
	return 0;
}
