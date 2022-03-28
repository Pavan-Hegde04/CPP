#include<iostream>
using namespace std;

int main()throw(int,double)
{
        int a=2;
	try
	{
                if(a==1)
                {
                        throw a;
                }
                else if(a==2)
                {
                        throw 'A';
                }
                else if(a==5.5)
                        throw 4.5;
        }
        catch(int a)
        {
                cout<<"\nException: Divide by zero "<<endl;
        }
        catch(double d)
        {
                cout<<"\nException: Unknown "<<endl;
        }
        catch(...)
        {
        	cout<<"default"<<endl;
        }
        cout<<"\nEnd "<<endl;
        return 0;
}

