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
		if(num2==0)
			throw num2;
		else
		{
			ans=num1/num2;
			cout<<"Ans = "<<ans<<endl;
		}
	}
	catch(int x)
	{
		cout<<"\ncan't divide by :"<<x<<endl;
	}
	cout<<"\nEnd of Program"<<endl;
	return 0;
}
