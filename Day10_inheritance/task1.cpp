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
			for(int i=0;i<5;i++)
			{
				cout<<"Enter marks of subject "<<i<<": ";
				cin>>marks[i];
			}
		}
};

class result : public student,public test
{
	public:
		int totalmarks=0;
		float percentage=0.0;
		void display3()
		{
			for(int k=0;k<5;k++)
			{
				totalmarks=totalmarks + marks[k];
			}
			percentage=(totalmarks*100)/500;
			cout<<"Roll no. - "<<roll_no<<endl;
			cout<<"Name of student - "<<name<<endl;
			cout<<"Total marks obtained is "<<totalmarks<<endl;
			cout<<"Percentage is "<<percentage<<endl;
		}
		
};

int main()
{
	result r;
	r.display1();
	r.display2();
	r.display3();
	return 0;
}
