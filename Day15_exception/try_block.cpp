#include<iostream>
using namespace std;

void Xtest(int test)
{
	cout<<"Inside Xtest, test is: "<<test<<endl;
	if(test)
		throw test;
}

int main()
{
	cout<<"Start"<<endl;
	try
	{
		cout<<"Inside try block"<<endl;
		Xtest(0);
		Xtest(1);
		Xtest(2);
		Xtest(3);
	}
	catch(int i)
	{
		cout<<"Caught an exception -- value is : ";
		cout<<i<<endl;
	}
	cout<<"End"<<endl;
	return 0;
}
