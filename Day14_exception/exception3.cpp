#include<iostream>
using namespace std;
int main()
{
	int a=1,d;

	try
	{
		try
		{
			throw a;
		}
		catch(int x)
		{
			cout<<"\nexception inner try"<<endl;			
			throw 'x';
		}
	}
	catch(char x)
	{
		cout<<"\nException "<<endl;
	}
	cout<<"\nEnd "<<endl;
	return 0;
}
