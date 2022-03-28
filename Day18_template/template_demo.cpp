#include<iostream>
using namespace std;

template <typename T,typename T2>
T2 sum(T n1, T2 n2)
{
	T2 rs;
	rs=n1+n2;
	return rs;
}
int main()
{
	int A=10;
	//double B=25.54;
	//float C;
	char B='A';
	double C;
	long a=11,b=22,c;
	C=sum(A, B);
	cout<<"SUM = "<<C<<endl;
	c=sum(a,b);
	cout<<"SUM = "<<c<<endl;
	return 0;
}
