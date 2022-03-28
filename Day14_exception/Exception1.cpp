//multiple Catch
#include<iostream>
using namespace std;
int main()
{
	int num1,ans,num2;
	
	cout<<"enter num1 "<<endl;
	cin>>num1;
	cout<<"enter num2 "<<endl;
	cin>>num2;

	try
	{
		if(num1!=num2)
		{
			float div=(float)num1/num2;
			if(div<0)
				throw 'E';
			cout<<"num1/num2= "<<div<<endl;
		}
		else
		{
			throw num2;
		}
	}
	catch(int E)
	{
		cout<<"\nException: Divide by zero "<<endl;
	}
	catch(char st)
	{
		cout<<"\nException: Division is less than 1 "<<endl;
	}
	catch(...)
	{
		cout<<"\nException: Unknown "<<endl;
	}
	return 0;
}
