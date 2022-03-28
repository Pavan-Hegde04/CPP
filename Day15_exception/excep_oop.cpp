#include<iostream>
using namespace std;
class test
{
	int x;
	public:
		void read()
		{
			cout<<"Enter a number : "<<endl;
			cin>>x;
		}
		class EVEN{};
		class ODD{};
		void check()
		{
			if(x%2==0)
				throw EVEN{};
			else
				throw ODD{};
			/*try
			{
				if(x%2==0)
					throw 2;
				else
					throw 'o';
			}
			catch(char std)
			{
				cout<<"ODD"<<endl;
			}
			catch(int x)
			{
				cout<<"EVEN"<<endl;
			}*/
		}
};
int main()
{
	test t1;
	t1.read();
	try
	{
		t1.check();
	}
	catch(test::EVEN)
	{
		cout<<"Catching even function..."<<endl;
		cout<<"Number is even"<<endl;
	}
	catch(test::ODD)
	{
		cout<<"Catching odd function..."<<endl;
		cout<<"Number is odd"<<endl;
	}
	return 0;
}
