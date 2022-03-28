#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	char line[100];
	fstream file;
	file.open("file1.txt",ios::out|ios::app);
	if(file.fail())
		cout<<"file didnot open"<<endl;
	else
	{
		cout<<"Name"<<endl;
		cin.getline(line,100);
		file<<line<<endl;
		cout<<"Age"<<endl;
		cin.getline(line,100);
		file<<line<<endl;
		cout<<"File updated"<<endl;
	}
	file.close();
	return 0;
}
