#include<iostream>
using namespace std;
class base1
{
        public:
		int x;
                base1(int j)
                {
			x=j;                        
			
                }
                ~base1()
                {
                        //cout<<"deleting base constructor"<<endl;
                }
		virtual void show()
		{
			cout<<x<<endl;
		}
		void show1()
		{
			cout<<x<<endl;
		}
};
class derived: public base1
{
        int z;
        public:
                derived(int j,int a):base1(a)
                {
                        z=j;
                }
		void show()
		{
			cout<<x<<" "<<z<<endl;
		}
};
class derived2: public base1
{
        int y;
        public:
                derived2(int j,int a):base1(a)
                {
                        y=j;
                }
		void show()
		{
			cout<<x<<" "<<y<<endl;
		}
};
int main()
{
	base1 *bptr;     
	derived d1(10,20);
	derived2 d2(30,50);
	bptr=&d1;
	bptr->show();
	bptr=&d2;
	bptr->show();
        return 0;
}
