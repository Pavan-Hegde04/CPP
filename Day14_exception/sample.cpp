#include<iostream>
using namespace std;
class A
{
	public:
		void displayA()
		{
			cout<<"Display A"<<endl;
		}
};
class B:public A
{
	public:
		void displayB()
		{
			cout<<"Display B"<<endl;
		}
};
class C: public B
{
	public:
		void displayC()
		{
			cout<<"Display C"<<endl;
		}
};
class D: public B,public C
{
	public:
		void displayD()
		{
			cout<<"Display D"<<endl;
		}
};
/*class E:public C,public D
{
	public:
		void displayE()
		{
			cout<<"Display E"<<endl;
		}
};
class F:public E
{
	public:
		void displayF()
		{
			cout<<"Display F"<<endl;
		}
};*/
int main()
{
	A a;
	B b;
	C c;
	D d;
	//E e;
	//F f;
	/*a.displayA();
	b.displayA();
	b.displayC();
	b.displayD();
	f.displayA();
	f.displayC();
	f.displayB();
	f.displayE();
	e.displayA();
	e.displayB();
	e.displayC();*/
	d.displayB();
	d.displayC();
	return 0;
}
