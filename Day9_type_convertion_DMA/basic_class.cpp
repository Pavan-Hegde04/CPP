#include<iostream>
#include<stdlib.h>
using namespace std;

//basic ---> class
class Time
{
	int hour,min;
	public:
		Time()
		{
			cout<<"Default\n";
		}		
	
		void display()
		{
			cout<<"Hour : "<<hour<<"\tMinute : "<<min<<endl;
		}
		//for constructor		
		Time(int x)
		{
			//cout<<"Inside the parameterized";
			hour=x/60;
			min=x%60;
		}
		
		//for overloading
		void operator = (int x)
		{
			//cout<<"Inside the overloaded";			
			hour=x/60;
			min=x%60;
		}
};

int main()
{
	int x;
	cout<<"Enter the minutes: ";
	cin>>x;

	int y;
	cout<<"Enter the minutes: ";
	cin>>y;
	
	Time t1;
	Time t2(y);
	t1=x;
	t1.display();
	t2.display();
	
	return 0;
}

