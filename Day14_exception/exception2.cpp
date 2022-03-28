#include<iostream>
using namespace std;
int main()
{
	int a=3,d;

	try
	{
		if(a==1)
		{
			throw a;
		}
		else if(a==2)
		{
			throw 'A';
		}
		else if(a==3)
			throw 4.5;
	}
	catch(int a)
	{
		cout<<"\nException: Divide by zero "<<endl;
	}
	catch(char st)
	{
		cout<<"\nException: Division is less than 1 "<<endl;
	}
	catch(double d)
	{
		cout<<"\nException: Unknown "<<endl;
	}
	cout<<"\nEnd "<<endl;
	return 0;
}
