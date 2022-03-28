#include<iostream>
using namespace std;
class demo
{
	int x=10;
	public:
		demo()
		{
			cout<<"Inside constructor"<<endl;
		}

		demo(demo &obj)
		{
			cout<<"copy constructor"<<endl;
		}
		
		void add(demo ob,demo ob1)
		{
			cout<<"Inside add() function "<<endl;
		}
	
		demo add_ret()
		{
			demo temp;
			cout<<"inside add_ret() function "<<endl;
			return temp;
		}
	
};
int main()
{
	demo obj1;
	demo obj2;
	obj2=obj1;
	obj2=obj1.add_ret();
	return 0;
}
