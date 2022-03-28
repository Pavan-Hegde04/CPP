#include<iostream>
using namespace std;
inline int cubee(int s)
{
	return s*s*s;
}
int main()
{
	int cube;
	cout<<"Enter the number : ";
	cin>>cube;
	cout<<"The cube of given number is : "<<cubee(cube)<<endl;
	return 0;
}
