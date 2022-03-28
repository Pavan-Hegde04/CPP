//derived class program

#include<iostream>
using namespace std;
class base
{
	int i,j;
	public:
		void set(int a,int b)
		{
			i=a;
			j=b;
		}
		void show()
		{
			cout<<i<<" "<<j<<endl;
		}
};
/*class derived: private base  //we cannot access the base class with private mode in main
{
	int k;
	public:
		derived (int x)
		{
			k=x;
		}
		void showk()
		{
			cout<<k<<endl;
		}
};*/

class derived: public base
{
	int k;
	public:
		derived (int x)
		{
			k=x;
		}
		void showk()
		{
			cout<<k<<endl;
		}
};

int main()
{
	derived ob(5);
	ob.set(1,2);
	ob.show();
	ob.showk();
	return 0;
}
