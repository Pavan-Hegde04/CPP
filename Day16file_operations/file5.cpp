#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main()
{
	fstream input;
	string str;
	//char word[30];
	int count=0;
	input.open("file1.txt");
	if(!input)
		cout<<"file did not open"<<endl;
	else
	{
		while(getline(input,str))
		{
			
			count++;
		}
	}
	cout<<"total lines: "<<count<<endl;
	//cout<<endl;
	input.close();
	return 0;
}
