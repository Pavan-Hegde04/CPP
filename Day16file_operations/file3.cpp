#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;

int main()
{
	fstream input;
	string str,str2,str3;
	input.open("file1.txt");
	if(!input)
		cout<<"file did not open"<<endl;
	else
	{
		while(!input.eof())
		{
			input>>str>>str2>>str3;
			cout<<str<<'\t'<<str2<<'\t'<<str3<<endl;
		}
	}
	//cout<<endl;
	input.close();
	return 0;
}
