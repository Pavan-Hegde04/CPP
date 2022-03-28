#include<iostream>
using namespace std;
class base
{
	int x;
	public:
		base()
		{
			cout<<"base default constructor"<<endl;
		}
		base(int j)
		{
			cout<<"base param. constructor"<<endl;
		}
		~base()
		{
			cout<<"deleting base constructor"<<endl;
		}
};
class derived:public base
{
	int y;
	public:
		derived()
		{
			cout<<"derived default constructor"<<endl;
		}
		derived(int i)
		{
			cout<<"derived parameterized constructor"<<endl;
		}
		~derived()
		{
			cout<<"deleting derived default constructor"<<endl;
		}
};
int main()
{
	base b(2);
	derived d1;
	derived d2(1);
	
	return 0;
}
