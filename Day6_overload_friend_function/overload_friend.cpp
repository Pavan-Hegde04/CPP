#include<iostream>
using namespace std;
class B;
class A
{
	int x;
	public:
		void data(int i)
		{
			x=i;
		}
	friend void max (A,B);
};
class B
{
	int y;
	public:
		void data(int i)
		{
			y=i;
		}
	friend void max (A,B);
};
void max(A a,B b)
{
	if(a.x>=b.y)
		cout<<a.x<<endl;
	else
		cout<<b.y<<endl;
}

int main()
{
	A a;
	B b;
	a.data(10);
	b.data(20);
	max(a,b);
	return 0;
}
