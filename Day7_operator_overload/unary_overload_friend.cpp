#include<iostream>
using namespace std;
class space
{
	int x,y,z;
	public:
		space()
		{
			x=y=z=0;
		}
		space(int a,int b,int c)
		{
			x=a;
			y=b;
			z=c;
		}
		void display()
		{
			cout<<"\nx= "<<x<<",y= "<<y<<",z= "<<z<<endl;
		}
		void friend operator -(space &q);
};

void operator -(space &q)
{
	q.x=-q.x;
	q.y=-q.y;
	q.z=-q.z;
}

int main()
{
	space s1(1,2,3);
	cout<<"Before overloading"<<endl;
	s1.display();
	-s1;
	cout<<"After overloading"<<endl;
	s1.display();
	return 0;
}
