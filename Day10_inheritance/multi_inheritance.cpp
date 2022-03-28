#include<iostream>
using namespace std;
class person
{
	public:
		int height=170;
		void fun()
		{
			cout<<"person class"<<endl;
			cout<<"Height = "<<height<<endl;
		}
	protected:
		int weight=70;
		void weigh()
		{
			//weight=70;
			cout<<"calling base class person protected"<<endl;
			cout<<"Weight = "<<weight<<endl;
		}
	private:
		int a=100;
		void pr()
		{
			//a=100;
			cout<<"calling base class person privately"<<endl;
		}
};

class doctor: public person
{
	public:
		int x=1;
		void fun1()
		{
			cout<<"doctor class"<<endl;
			cout<<"Height of the person is "<<height<<" cm"<<endl;
		}
	protected:
		int y=2;
		void fun2()
		{
			cout<<"doctor had called the person class"<<endl;
			cout<<"Weight of the person is "<<weight<<" Kg"<<endl;
		}
	private:
		int z=3;
		void fun3()
		{
			cout<<"doctor had called the person class"<<endl;
			cout<<"the person is so depressed keep it private please....."<<endl;
			cout<<"a= "<<a<<endl;
		}
};

class jrDoc: public doctor
{
	public:
		void fun1()
		{
			cout<<"jr doc class"<<endl;
			cout<<"Height of the person is "<<height<<" cm"<<endl;
			cout<<"x= "<<x<<endl;
		}
	protected:
		void fun2()
		{
			cout<<"doctor had called the person class"<<endl;
			cout<<"Weight of the person is "<<weight<<" Kg"<<endl;
			cout<<"y= "<<y<<endl;
		}
	private:
		void fun3()
		{
			cout<<"doctor had called the person class"<<endl;
			cout<<"the person is so depressed keep it private please....."<<endl;
			cout<<"z= "<<z<<endl;
			cout<<"a= "<<a<<endl;
		}
};



int main()
{
	person p1;
	p1.fun();
	doctor d1;
	d1.fun1();
	d1.fun2();
	d1.fun3();
	jrDoc j1;
	j1.fun1();
	j1.fun2();
	j1.fun3();
	return 0;
}
