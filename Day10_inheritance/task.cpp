#include<iostream>
using namespace std;
class student
{
	public:
		int roll_no;
		char name[20];
		void display1()
		{
			cout<<"Enter Roll no. "<<endl;
			cin>>roll_no;
			cout<<"Enter name "<<endl;
			cin>>name;

		}
};

class test
{
	public:
		int marks[5];
		void display2()
		{
			for(int i=1;i<=5;i++)
			{
				cout<<"Enter marks of subject "<<i<<": ";
				cin>>marks[i];
			}
			cout<<"subject marks are : "<<endl;
			for(int j=1;j<=5;j++)
			{
				cout<<" "<<marks[j]<<endl;
			}
		}
};

class result : public student,public test
{
	public:
		int totalmarks,percentage;
		void display3()
		{
			for(int k=1;k<=5;k++)
			{totalmarks=+marks[k];}
			percentage=totalmarks/500*100;
			cout<<"Roll no. - "<<roll_no<<endl;
			cout<<"Name of student - "<<name<<endl;
			cout<<"Total marks obtained is "<<totalmarks<<endl;
			cout<<"Percentage is "<<percentage<<endl;
		}
		
};

int main()
{
	student s;
	test t;
	result r;
	s.display1();
	t.display2();
	r.display3();
	return 0;
}
