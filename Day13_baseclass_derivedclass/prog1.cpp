#include<iostream>
using namespace std;
class base1
{
        protected:
	int x;
        public:
                base1(int j)
                {
			x=j;                        
			
                }
                ~base1()
                {
                        //cout<<"deleting base constructor"<<endl;
                }
		void show()
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
                ~derived()
                {
                        //cout<<"deleting derived default constructor"<<endl;
                }
		void show()
		{
			cout<<x<<" "<<z<<endl;
		}
};
int main()
{
	base1 *bptr;
	base1 b(40);     
	derived d1(10,20);
	bptr=&b;
	bptr->show();
	bptr=&d1;
	bptr->show();
	derived *dptr;
	dptr=&d1;
	dptr->show();
	dptr->show1();
        return 0;
}
