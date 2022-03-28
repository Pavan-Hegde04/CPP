#include<iostream>
using namespace std;
class shape
{
	protected:
		float x;
        public:
                void getdata()
		{
			cin>>x;
		}
		virtual float calculatearea()=0;
};
class square: public shape
{
        public:
		int y;
                float calculatearea()
		{
			 y=x*x;			
			return y;
		}
		void display()
		{
			cout<<"ans = "<<y<<endl;
		}
};
class circle: public shape
{
        public:
		int z;
                float calculatearea()
		{
			 z=3.14*x*x;			
			return z;
		}
		void display()
		{
			cout<<"ans = "<<z<<endl;
		}
};
int main()
{
	square s;
	circle c;
	//shape sh;
	s.getdata();
	s.calculatearea();
	s.display();
	c.getdata();
	c.calculatearea();
	c.display();
        return 0;
}
