#include<iostream>
#include<fstream>
using namespace std;

class student
{
	public:
		int roll;
		char name[25];
		float marks;
		
		void getdata()
		{
			cout<<"Enter roll no. and name"<<endl;
			cin>>roll>>name;
			cout<<"Marks"<<endl;
			cin>>marks;
		}
		
		void Addrecord()
		{
			fstream f;
			student stu;
			f.open("student.dat",ios::app|ios::binary);
			stu.getdata();
			f.write((char*)&stu,sizeof(stu));
			f.close();
		}
		void display()
		{
			
			fstream f;
			student s;
			
			f.open("student.dat",ios::in|ios::binary);
			while(!f.eof())
			{
			f.read((char*)&s,sizeof(s));
			cout<<"Roll no. -- "<<s.roll<<"\nName -- "<<s.name<<"\nMarks -- "<<s.marks<<endl;
			}
			f.close();
		}
		
};
int main()
{
	student s;
	char ch='n';
	do
	{
		s.Addrecord();
		cout<<"want add more? (Y/N)"<<endl;
		cin>>ch;
	}while(ch=='y'||ch=='Y');
	cout<<"updated!!!"<<endl;
	

		s.display();
	
	return 0;
}

