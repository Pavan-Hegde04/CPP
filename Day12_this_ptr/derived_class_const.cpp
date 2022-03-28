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
class derived:virtual private base1,virtual public base2
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
	      
	derived d1(10,20,30);
	d1.show();
	d1.show1();
        int pid;
	d1.show2();
        return 0;
}

