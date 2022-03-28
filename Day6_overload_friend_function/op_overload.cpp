//Demo code for operator overloading

#include<iostream>
using namespace std;

class complex
{
	int real,img;
	public:
		complex()//default const.
		{
			real=0;
			img=0;
		}
		
		complex(int x,int y) //parameterized const.
		{
			real=x;
			img=y;
		}
		
		void disp() //display value
		{
			cout<<"value for real is : "<<real<<" and img is : "<<img<<endl<<endl;
		}

		complex operator + (complex ob) //overloading '+' operator here
		{
			complex temp;
			temp.real=real+ob.real;
			temp.img=img+ob.img;
			return temp;
		}

		complex operator - (complex ob) //overloading '-' operator here
		{
			complex temp;
			temp.real=real-ob.real;
			temp.img=img-ob.img;
			return temp;
		}


		complex operator * (complex ob) //overloading '*' operator here
		{
			complex temp;
			temp.real=real*ob.real;
			temp.img=img*ob.img;
			return temp;
		}

		complex operator / (complex ob) //overloading '/' operator here
		{
			complex temp;
			temp.real=real/ob.real;
			temp.img=img/ob.img;
			return temp;
		}

		complex operator ++ () //overloading '++x' operator here
		{
			complex temp;
			temp.real=++real;
			temp.img=++img;
			return temp;
		}

		complex operator -- () //overloading '--x' operator here
		{
			complex temp;
			temp.real=--real;
			temp.img=--img;
			return temp;
		}
		
		complex operator != (complex ob) //overloading '!=' operator here
		{
			complex temp;
			if(real!=ob.real)
			{
				temp.real= 25;
				temp.img= 25;
			}
			else
			{			
				temp.real= 0;
				temp.img= 0;
			}
			return temp;
		}

		complex operator <= (complex ob) //overloading '<=' operator here
		{
			complex temp;
			if(real<=ob.real)
			{
				temp.real= 50;
				temp.img= 50;
			}
			else
			{			
				temp.real= 0;
				temp.img= 0;
			}
			return temp;
		}

		complex operator >= (complex ob) //overloading '!=' operator here
		{
			complex temp;
			if(real>=ob.real)
			{
				temp.real= 75;
				temp.img= 75;
			}
			else
			{			
				temp.real= 0;
				temp.img= 0;
			}
			return temp;
		}



}; //end of complex class

int main()
{
	complex c1(10,20), c2(2,5);
	complex c3;
	c1.disp();
	c2.disp();
	c3.disp();
	
	//adding 2 objects
	//c3=c1+c2; //or
	cout<<"........operator overload func running with + ........"<<endl<<endl;
	c3=c1.operator +(c2);	
	c3.disp();
	cout<<"........operator overload func running with - ........"<<endl<<endl;
	c3=c1.operator -(c2);	
	c3.disp();
	cout<<"........operator overload func running with * ........"<<endl<<endl;
	c3=c1.operator *(c2);	
	c3.disp();
	cout<<"........operator overload func running with / ........"<<endl<<endl;
	c3=c1.operator /(c2);	
	c3.disp();
	cout<<"........operator overload func running with ++ ........"<<endl<<endl;
	c3=++c1;	
	c3.disp();
	cout<<"........operator overload func running with -- ........"<<endl<<endl;
	c3=--c1;	
	c3.disp();
	cout<<"........operator overload func running with != ........"<<endl<<endl;
	c3=c1.operator !=(c2);	
	c3.disp();
	cout<<"........operator overload func running with <= ........"<<endl<<endl;
	c3=c1.operator <=(c2);	
	c3.disp();
	cout<<"........operator overload func running with >= ........"<<endl<<endl;
	c3=c1.operator >=(c2);	
	c3.disp();
	return 0;
}
