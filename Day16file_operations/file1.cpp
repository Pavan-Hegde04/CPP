#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;

int main()
{
	ifstream input;
	string str;
	input.open("file.txt");
	if(!input)
		cout<<"file did not open"<<endl;
	else
	{
		while(!input.eof())
		{
			input>>str;
			cout<<str<<" ";
		}
	}
	cout<<endl;
	return 0;
}
