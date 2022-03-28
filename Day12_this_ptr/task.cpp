#include<iostream>
using namespace std;
class student
{
	private:
		int marks;
		char name[20];
	public:
		int roll_no;
		void getdata()
		{
			cout<<"enter student name"<<endl;;
			cin>>name;
			cout<<"enter roll no. "<<endl;
			cin>>roll_no;
			cout<<"enter mark of subject"<<endl;
			cin>>marks;
		}
		void printdata()
		{
			cout<<"name of student is :: "<<name<<endl;
			cout<<"roll no. of student is :: "<<roll_no<<endl;
			cout<<"mark of student is :: "<<marks<<endl;
		}
};
int main()
{
	student s[3];
	student *ptr=s;
	for(int i=0;i<3;i++)
	{
		ptr->getdata();
		ptr->printdata();
		ptr++;
	}
	return 0;
}
