#include<iostream>
#include<exception>
using namespace std;
int main()
{
	try
	{
		int a=10/0;
		cout<<a;
		//int* arr= new int[10000000000];
	}
	catch(exception a)
	{
		cout<<"Std exception"<<a.what()<<endl;
	}
	return 0;
}
