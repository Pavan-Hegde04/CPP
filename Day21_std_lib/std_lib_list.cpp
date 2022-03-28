#include<iostream>
#include<list>
using namespace std;
int main()
{
	list<int>lst;
	int i;
	
	//assign the elements of the list some values
	for(i=0;i<10;i++)
	{
		lst.push_back(i);
	}
	
	cout<<"Size = "<<lst.size()<<endl;
	cout<<"Contents: ";
	list<int>::iterator p = lst.begin();
	while(p!=lst.end())
	{
		cout<<*p<<" ";
		p++;
	}
	cout<<"\n\n";
	p=lst.begin();
	while(p!=lst.end())
	{
		*p=*p*100;
		p++;
	}
	cout<<"Content Modified: ";
	p=lst.begin();
	while(p!=lst.end())
	{
		
		cout<<*p<<" ";
		p++;
	}
	cout<<endl;
	
	p=lst.begin();
	while(p!=lst.end())
	{
		*p=*p+100*2;
		p++;
	}
	
	cout<<"Content Modified & Reversed: ";
	p=lst.end();
	while(p!=lst.begin())
	{
		p--;
		cout<<*p<<" ";
		//p--;
	}
	cout<<endl;
	return 0;
}
