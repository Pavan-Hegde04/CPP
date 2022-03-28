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
		void operator --();
};

void space::operator --()
{
	x--;
	y--;
	z--;
}

int main()
{
	space s1(10,20,30);
	s1.display();
	--s1;
	s1.display();
	return 0;
}
