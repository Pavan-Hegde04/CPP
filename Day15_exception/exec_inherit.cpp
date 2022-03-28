#include<iostream>
#include<exception>
using namespace std;
class base{};
class derived:public base{};
int main()
{
	try
	{
		throw derived();
	}
	
	catch(derived d)
	{
		cout<<"Derived object caught"<<endl;
	}
	catch(base b)
	{
		cout<<"base object caught"<<endl;
	}
	return 0;
}
