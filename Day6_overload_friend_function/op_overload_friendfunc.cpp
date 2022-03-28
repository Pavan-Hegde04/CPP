#include<iostream>
using namespace std;
class val
{
	int a,b,c;
	public:
		
		val()
		{
			a=5;
			b=10;
			c=15;
		}		
		val(int x,int y,int z)
		{
			a=x;
			b=y;
			c=z;
			cout<<"values of A,B & C"<<endl;
			cout<<a<<"\n"<<b<<"\n"<<c<<"\n"<<endl;
		}
		void disp()
		{
			cout<<a<<"\n"<<b<<"\n"<<c<<"\n"<<endl;
		}
		friend val operator + (val,val);
};

val operator + (val ob1,val ob2)
{
	val temp;
	temp.a=ob1.a+ob2.a;
	temp.b=ob1.b+ob2.b;
	temp.c=ob1.c+ob2.c;
	return temp;
}

int main()
{
	cout<<"value for class val ..."<<endl<<endl;	
	val v1(5,10,15),v2(1,2,3),v3;
	
	cout<<"........operator overload using Friend func running with + ........"<<endl<<endl;
	v3=v1+v2;
	v3.disp();
	return 0;
}

