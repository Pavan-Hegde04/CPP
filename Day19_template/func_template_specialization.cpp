#include<iostream>
using namespace std;

template<class X>
void swap(X *a,X *b)
{
	X temp;
	temp=*a;
	*a=*b;
	*b=temp;
	cout<<"Inside template swap.\n";
}

void swap(int *a,int *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
	cout<<"Inside int specialization.\n";
}

int main()
{
	int i=10;
	int j=20;
	double x=10.10;
	double y=20.20;
	char a='A';
	char b='B';
	cout<<"Original i,j: "<<i<<' '<<j<<endl;
	cout<<"Original x,y: "<<x<<' '<<y<<endl;
	cout<<"Original a,b: "<<a<<' '<<b<<endl;
	swap(&i,&j);	
	swap(&x,&y);
	swap(&a,&b);
	cout<<"swaped i,j: "<<i<<' '<<j<<endl;
	cout<<"swaped x,y: "<<x<<' '<<y<<endl;
	cout<<"swaped a,b: "<<a<<' '<<b<<endl;
	return 0;
}
