#include<iostream>
using namespace std;
int cubevolume(int l=5,int w=6,int h=7)
{
	return l*w*h;
}
int main()
{
	cout<<"Cube of volume length*width*height = "<<cubevolume()<<endl;
	cout<<"Cube of volume length*width*height = "<<cubevolume(9)<<endl;
	cout<<"Cube of volume length*width*height = "<<cubevolume(15,16)<<endl;
	cout<<"Cube of volume length*width*height = "<<cubevolume(1,2,3)<<endl;
	return 0;
}
