//pointers and objects

#include<iostream>
using namespace std;
class demo
{
	int i;
	public:
		demo(int x)
		{
			i=x;
		}
		int getdata()
		{
			return i;
		}
};
int main()
{
	demo d[3]={10,20,30};
	demo *ptr=d;
	for(int a=0;a<3;a++)
	{
		cout<<ptr->getdata()<<endl;
		ptr++;
	}
	return 0;
}
