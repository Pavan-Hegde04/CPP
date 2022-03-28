#include<iostream>
using namespace std;

template<typename T1,typename T2>
class sample
{
	T1 a;
	T2 b;
	public:
		void getdata()
		{
			cout<<"Enter A & B"<<endl;
			cin>>a>>b;
		}
		void display()
		{
			cout<<"the values : "<<endl;
			cout<<"a: "<<a<<" b: "<<b<<endl;
		}
};

int main()
{
	sample<int,int>obj1;
	sample<int,double>obj2;
	sample<double,double>obj3;
	
	cout<<"int values : "<<endl;
	obj1.getdata();
	obj1.display();
	
	cout<<"int & double values : "<<endl;
	obj2.getdata();
	obj2.display();
	
	cout<<"double & double values : "<<endl;
	obj3.getdata();
	obj3.display();
	return 0;
}
