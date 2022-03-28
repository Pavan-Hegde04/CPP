#include<iostream>
using namespace std;
class base
{
        public:
		virtual void function()
		{
			cout<<"base virtual"<<endl;
		}
};
class derived1: public base
{
        public:
		void function()
		{
			cout<<"derived 1 virtual"<<endl;
		}
};
class derived2: public base
{
        public:
		void display()
		{
			cout<<"derived 2 display"<<endl;
		}
};
int main()
{
	derived1 d1;
	derived2 d2;
	d2.function();
	base b;
	b.function();
        return 0;
}
