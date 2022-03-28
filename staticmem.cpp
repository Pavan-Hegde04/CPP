#include<iostream>
using namespace std;
class item
{
	int num;
	static int c;
	public:
		void getdata(int a)
		{
			num=a;
			c++;
		}
		static void getcount()
		{
			cout<<"value of count "<<c<<endl;
		}
};
int item::c;
int main()
{
	item i1;
	i1.getdata(10);
	i1.getcount();
	return 0;
}

