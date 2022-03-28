#include<iostream>
using namespace std;
int main()
{
	int *ptr1,*ptr2,sum;

	ptr1=new int;
	ptr2=new int;

	cout<<"Enter the first number : ";
	cin>>*ptr1;
	cout<<"\nEnter the second number : ";
	cin>>*ptr2;
	sum=*ptr1+*ptr2;
	cout<<"\nSum of given numbers is : "<<sum<<endl;
	
	//deleting that memory allocated pointer variables
	delete ptr1;
	delete ptr2;
	return 0;
}
