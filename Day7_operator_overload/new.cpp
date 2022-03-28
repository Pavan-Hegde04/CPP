#include<iostream>
using namespace std;
int main()
{
	float *ptr= new float;
	*ptr=55;
	
	cout<<"value is : "<<*ptr<<endl;
	cout<<"address is : "<<ptr<<endl;
	cout<<"size of value is : "<<sizeof (*ptr)<<endl;
	cout<<"size of address is : "<<sizeof (ptr)<<endl;
	return 0;
}
