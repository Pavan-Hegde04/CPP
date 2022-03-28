#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main()
{
	fstream input;
	//string str,str2,str3;
	char word[30];
	int count=0;
	input.open("file1.txt");
	if(!input)
		cout<<"file did not open"<<endl;
	else
	{
		while(!input.eof())
		{
			input>>word;
			count++;
		}
	}
	cout<<"total words: "<<count<<endl;
	//cout<<endl;
	input.close();
	return 0;
}
