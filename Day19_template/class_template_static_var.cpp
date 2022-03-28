#include<iostream>
using namespace std;
//extern static int i=10;
template<typename T>
class func
{
	public:
		T fun(const T &x)
		{
			static int i;
			cout<<++i<<endl;
			return i;
		}
};

int main()
{
	//int i;
	func<int>obj1;
	func<double>obj2;
	obj1.fun(1);
	obj1.fun(1);
	
	cout<<endl;
	
	obj2.fun(2);
	obj2.fun(2);
	
	cout<<endl;
	
	obj1.fun(1);
	obj2.fun(2);
	return 0;
}
