#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	fstream fp;
	char buff[100];
	int pos;
	
	fp.open("data.txt",ios::out|ios::app);
	cout<<"writing to a file"<<endl;
	fp<<"line one"<<endl;
	fp<<"line two"<<endl;
	
	pos=fp.tellp();
	cout<<"Current position : "<<pos<<endl;
	
	fp.seekp(-7,ios::cur);
	fp<<"random data"<<endl;
	
	fp.seekp(7,ios::beg);
	fp<<"hello world";
	fp.close();
	
	cout<<"done writing"<<endl;
	
	fp.open("data.txt");
	cout<<"reading the file"<<endl;
	fp.seekg(0);
	while(fp.getline(buff,100))
	{
		cout<<buff<<endl;
	}
	pos=fp.tellg();
	cout<<"pos pointer is at : "<<pos<<endl;
	
	return 0;
}
