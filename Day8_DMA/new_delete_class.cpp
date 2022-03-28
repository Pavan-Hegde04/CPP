#include<iostream>
using namespace std;
class A
{
	public:
		int i,j;
		A()
		{
			cout<<"Inside constructor"<<endl;			
			i=10;j=20;
		}
		~A()
		{
			cout<<"Inside destructoe"<<endl;			
		}
};
int main()
{
	int *ptr1,*ptr2,sum;
	A a1,*a2,*a3,*a4;
	ptr1=new int;
	ptr2=new int;
	a2=new A;
	a3=new A [5];
	a4=new A;
	a4=NULL;

	cout<<"size of a1 "<<sizeof(a1)<<"\t size of a2 is "<<sizeof(a2)<<endl;
	cout<<"a2[0].i is "<<a2[0].i<<"\t size of a2 is "<<sizeof(a2)<<endl;
	cout<<"size of sum "<<sizeof(sum)<<"\t size of ptr1 is "<<sizeof(ptr1)<<endl;
	
	//deleting that memory allocated pointer variables
	delete ptr1;
	delete ptr2;
	delete a2;
	delete[] a3;
	delete a4;
	cout<<"a2[0].i is "<<a2[0].i<<"\t size of a2 is "<<sizeof(a2)<<endl;
	return 0;
}
