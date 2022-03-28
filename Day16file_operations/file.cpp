#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	fstream myfile;
	myfile.open("file.txt",ios::in);
	
	if(!myfile)
		cout<<"the file cannot open"<<endl;
	else
		cout<<"the file exists"<<endl;
	return 0;
}
