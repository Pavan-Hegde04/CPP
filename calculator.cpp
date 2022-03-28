#include<iostream>
using namespace std;
class calculator
{
	public:
		int input1;
		int input2;
		int input3;
		int facto=1;
		int ob,ob1;
		
		void setinput()
		{
			cout<<"Enter 1st Number : ";
			cin>>input1;
			cout<<"Enter 2nd Number : ";
			cin>>input2;
		}
		
		void setinput_factorial()
		{
			cout<<"Enter Number for Factorial : ";
			cin>>input3;
		}
		
		int addob1(calculator obj1,calculator obj2,calculator obj3)
		{
			return obj1.input1+obj2.input1;
		}
		
		int addob2(calculator obj1,calculator obj2,calculator obj3)
		{
			return obj1.input2+obj2.input2;
		}

		int addob3(calculator obj1,calculator obj2,calculator obj3)
		{
			ob=addob1(obj1,obj2,obj3);
			ob1=addob2(obj1,obj2,obj3);
			return ob+ob1;
		}		
		
		int sub()
		{
			return input1-input2;
		}

		int mul()
		{
			return input1*input2;
		}

		int div()
		{
			return input1/input2;
		}

		int fact()
		{
			for(int q=1;q<=input3;++q)
			{
				facto*=q;
			}
			return facto;
		}
};

int main()
{
	int ch;
	calculator obj1;
	calculator obj2;
	calculator obj3;
	cout 	<<"1.Addition"
	     	<<"\n2.Subtraction"
		<<"\n3.Multiplication"
		<<"\n4.Division"
		<<"\n5.Factorial"
		<<"\n6.Exit"
		<<"\n";
	do
	{
		cout<<"Enter Choice";
		cin>>ch;
		switch(ch)
		{
			case 1:
				obj1.setinput();
				obj2.setinput();
				cout<<"Result : "<<obj1.addob3(obj1,obj2,obj3)<<endl;
				break;
			case 2:
				obj1.setinput();
				cout<<"Result : "<<obj1.sub()<<endl;
				break;
			case 3:
				obj1.setinput();
				cout<<"Result : "<<obj1.mul()<<endl;
				break;
			case 4:
				obj1.setinput();
				cout<<"Result : "<<obj1.div()<<endl;
				break;
			case 5:
				obj1.setinput_factorial();
				cout<<"Result : "<<obj1.fact()<<endl;
				break;
		}
	}while(ch<6);	
	return 0;
}
