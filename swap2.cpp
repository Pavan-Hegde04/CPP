#include<iostream>
using namespace std;
void swap(int *n1,int *n2)
{
	int temp;
	temp=*n1;
	*n1=*n2;
	*n2=temp;
}
int main()
{
	int a=1,b=2;
	cout<<"before swaping number is "<<a<<endl;
	cout<<"before swaping number is "<<b<<endl;
	swap(&a,&b);
	cout<<"after swaping number is "<<a<<endl;
	cout<<"after swaping number is "<<b<<endl;
	return 0;
}
