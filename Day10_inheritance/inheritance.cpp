#include<iostream>
using namespace std;
class person
{
	public:
		int height=170;
		void fun()
		{
			cout<<"calling base class person publically"<<endl;
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
/*
class doctor: public person
{
	public:
		void fun1()
		{
			cout<<"doctor had called the person class"<<endl;
			cout<<"Height of the person is "<<height<<" cm"<<endl;
		}
	protected:
		void fun2()
		{
			cout<<"doctor had called the person class"<<endl;
			cout<<"Weight of the person is "<<weight<<" Kg"<<endl;
		}
	private:
		void fun3()
		{
			cout<<"doctor had called the person class"<<endl;
			cout<<"the person is so depressed keep it private please....."<<endl;
			//cout<<"a= "<<a<<endl;
		}
};*/

class doctor1: protected person
{
	public:
		void fun1()
		{
			cout<<"doctor had called the person class"<<endl;
			cout<<"Height of the person is "<<height<<" cm"<<endl;
		}
	/*protected:
		void fun2()
		{
			cout<<"doctor had called the person class"<<endl;
			cout<<"Weight of the person is "<<weight<<" Kg"<<endl;
		}
	private:
		void fun3()
		{
			cout<<"doctor had called the person class"<<endl;
			cout<<"the person is so depressed keep it private please....."<<endl;
			//cout<<"a= "<<a<<endl;
		}*/
};
/*
class doctor2: private person
{
	public:
		void fun1()
		{
			cout<<"doctor had called the person class"<<endl;
			cout<<"Height of the person is "<<height<<" cm"<<endl;
		}
	protected:
		void fun2()
		{
			cout<<"doctor had called the person class"<<endl;
			cout<<"Weight of the person is "<<weight<<" Kg"<<endl;
		}
	private:
		void fun3()
		{
			cout<<"doctor had called the person class"<<endl;
			cout<<"the person is so depressed keep it private please....."<<endl;
			//cout<<"a= "<<a<<endl;
		}
};*/



int main()
{
	person p1;
	p1.fun();
	/*doctor d1;
	d1.fun1();
	d1.fun2();
	d1.fun3();*/
	doctor1 d2;
	d2.fun1();
	//d2.fun2();
	//d2.fun3();
	/*doctor d3;
	d3.fun1();
	d3.fun2();
	d3.fun3();*/
	return 0;
}
