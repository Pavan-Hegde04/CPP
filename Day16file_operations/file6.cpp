#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main()
{
	fstream input,output;
	char ch;
	input.open("file1.txt");
	output.open("file.txt");
	if(!input && !output)
		cout<<"file did not open"<<endl;
	else
	{
		while(!input.eof())
		{
			input.get(ch);
			//output<<ch;
		}
		while(output.eof())
		{
			output<<ch;
		}
	}
	cout<<"copy done!!!"<<endl;
	//cout<<endl;
	input.close();
	output.close();
	return 0;
}
