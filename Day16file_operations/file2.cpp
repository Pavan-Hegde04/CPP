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
		while(getline(input,str))
		{
			cout<<str<<" "<<endl;
		}
	}
	//cout<<endl;
	return 0;
}
