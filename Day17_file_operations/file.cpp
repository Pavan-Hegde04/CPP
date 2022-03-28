#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	ofstream outfile;
	outfile.open("file1.txt");
	outfile<<"This is my file";
	long pos=outfile.tellp();
	outfile.seekp(6,ios::cur);
	outfile<<" Again my file";
	outfile.close();
	cout<<"Done!!!"<<endl;
	return 0;	
}
