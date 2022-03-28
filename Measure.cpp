#include<iostream>
using namespace std;

class measure
{
	public:
		int height,length,width;
		
		void setinput(int a,int b,int c)
		{
			height=a;
			length=b;
			width=c;
		}
		
		int area()
		{
			return length*width;
		}
		
		int volume();
		/*{
			return length*width*height;
		}*/
};

int measure::volume()
{
	return length*width*height;
}

int main()
{
	measure obj1;
	measure obj2;
	obj1.setinput(10,20,30);
	obj2.setinput(11,22,33);
	cout<<"Input for first object : "<<obj1.height<<" "<<obj1.length<<" "<<obj1.width<<endl;
	cout<<"Area of first object is : "<<obj1.area()<<endl;
	cout<<"Volume of first object is : "<<obj1.volume()<<endl;
	cout<<"Input for second object : "<<obj2.height<<" "<<obj2.length<<" "<<obj2.width<<endl;
	cout<<"Area of second object is : "<<obj2.area()<<endl;
	cout<<"Volume of second object is : "<<obj2.volume()<<endl;
	return 0;
}
