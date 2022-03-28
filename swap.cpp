#include<iostream>
using namespace std;
int main()
{
	int x,y,temp;
	int *a,*b;
	cout<<"enter the numbers"<<endl;
	cin>>x>>y;
	
	a=&x;
	b=&y;
	temp=*a;
	*a=*b;
	*b=temp;
	cout<<"after swaping number is "<<x<<endl;
	cout<<"after swaping number is "<<y<<endl;
	return 0;
}
