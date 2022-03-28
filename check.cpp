#include<iostream>
using namespace std;

class myclass
{
	public:
		int x;
		void square(int s)
		{
			y=s;
			int sq=y*y;
			cout<<"square of given no. is "<<sq<<endl;	
		}
	private:
		int y;
	protected:
		int z;
};

class anotherclass::public myclass
{
	public:
		void id(int i)
		{
			z=i;
			cout<<"id is : "<<z<<endl;
		}
};

int main()
{
	myclass obj1;
	anotherclass obj2;
	obj1.x=10; //public accessed
	obj1.y=11; //not allowed (private type variable)
	obj1.square(5); //now it is accessed a private member in public function withen same class
	obj2.id(1504); 
	return 0;
}
