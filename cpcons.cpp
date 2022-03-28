#include<iostream>
using namespace std;
class demo
{
	int x,y;
	public:
		demo(int a,int b)
		{
			x=a;
			y=b;
			cout<<"parameterized constructor"<<endl;
		}
		demo(demo &a)
		{
			x=a.x;
			y=a.y;
			cout<<"copy constructor"<<endl;
		}
};
int main()
{
	demo obj1(5,6);
	demo obj2(obj1);
	obj2=obj1;
	return 0;
}
