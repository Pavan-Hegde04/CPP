#include<iostream>
using namespace std;
class A
{
	int n;
	public:
	int square(int x)
	{
		return x*x;
	}

};
class B
{
	public:
		int square(int n)
		{
			return n*n;
		}
};
int main()
{
	A a;
	B b;
	cout<<a.square(2)<<endl;

	cout<<b.square(2)<<endl;
	return 0;
}
