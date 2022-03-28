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
	A a1,*a2;
	ptr1=new int;
	ptr2=new int;
	a2=(A *)malloc(5*sizeof(A));
	

	cout<<"size of a1 "<<sizeof(a1)<<"size of a2"<<sizeof(a2)<<endl;
	cout<<"size of sum "<<sizeof(sum)<<"size of ptr1"<<sizeof(ptr1)<<endl;
	
	//deleting that memory allocated pointer variables
	delete ptr1;
	delete ptr2;
	free(a2);
	return 0;
}
