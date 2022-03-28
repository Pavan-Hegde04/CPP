#include<iostream>
using namespace std;
class Distance
{
	public:
		int feet;
		int inch;
		
		Distance(int f,int i);
		~Distance();
};

Distance :: Distance(int f,int i)
{
	feet=f;
	inch=i;
	cout<<"feet = "<<feet<<" & inch = "<<inch<<endl;
}

Distance :: ~Distance()
{
	cout<<"Destructor called"<<endl;
}

int main()
{
	Distance d1(5,10);
	Distance d2(1,2);
	return 0;
}
