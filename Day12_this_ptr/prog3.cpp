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
			cout<<"base param. constructor"<<endl;
			
                }
                ~base1()
                {
                        cout<<"deleting base constructor"<<endl;
                }
		void show()
		{
			cout<<x<<endl;
		}
};
class base2
{
        protected:
	int y;
        public:
                base2(int j)
                {
			y=j;                        
			cout<<"base param. constructor"<<endl;
			
                }
                ~base2()
                {
                        cout<<"deleting base constructor"<<endl;
                }
		void show1()
		{
			cout<<y<<endl;
		}
};
class derived: public base1, public base2
{
        int z;
        public:
                derived(int j,int a,int b):base1(a),base2(b)
                {
                        z=j;
			cout<<"derived parameterized constructor"<<endl;
                }
                ~derived()
                {
                        cout<<"deleting derived default constructor"<<endl;
                }
		void show2()
		{
			cout<<x<<" "<<y<<" "<<z<<endl;
		}
};
int main()
{
	base1 *ptr;
	base2 *ptrr;
	base1 b(40);
	base2 b1(45);     
	derived d1(10,20,30);
	ptr=&b;
	ptrr=&b1;
	ptr=&d1;
	ptr->show();
	ptr->show();
	ptrr->show1();
	//ptr->show2();
	((derived *)ptr)->show2();
        return 0;
}
