//override function


#include<iostream>
using namespace std;

class abc
{
	public:
		int a;
		void disp()
		{
			cout<<"abc class"<<endl;
			a=10;
			cout<<"a= "<<a<<endl;
		}
};

class xyz:public abc
{
	public:
		int a;
		void disp()
		{
			cout<<"xyz class"<<endl;
			a=15;
			cout<<"a= "<<a<<endl;
		}
};

int main()
{
	xyz x;
	x.disp();
	x.abc::disp();
	return 0;
}
