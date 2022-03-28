#include<iostream>
using namespace std;
int sum(int a)
{
	return a;
}

int sum(int a,int b)
{
	return a+b;
}

int sum(int a,int b,int c)
{
	return a+b+c;
}

int sum(int a,float b,int c)
{
	return a+b+c;
}

float sum(float a,int b,char c)
{
	return a+b+c;
}

char sum(float a,char b,int c)
{
	return b;
}


int main()
{
	cout<<"Sum is "<<sum(10)<<endl;
	cout<<"Sum is "<<sum(15,15)<<endl;
	cout<<"Sum is "<<sum(3,3,3)<<endl;
	cout<<"Sum is "<<sum(3,3,2)<<endl;
	cout<<"Sum is "<<sum(3,3,1)<<endl;
	cout<<"Sum is "<<sum(3,3,1)<<endl;
	return 0;
}
