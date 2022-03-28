#include<iostream>
#include<list>
using namespace std;
int main()
{
	list<int>lst1,lst2;
	int i;
	
	//assign the elements of the list some values
	for(i=0;i<10;i++)
	{
		lst1.push_back(rand()%20);
	}
	for(i=1;i<11;i++)
	{
		lst2.push_back(rand()%20);
	}
	//cout<<"Size = "<<lst.size()<<endl;
	cout<<"Contents 0f lst1 : ";
	list<int>::iterator p = lst1.begin();
	while(p!=lst1.end())
	{
		cout<<*p<<" ";
		p++;
	}
	cout<<"\n\n";
	cout<<"Contents 0f lst2 : ";
	p = lst2.begin();
	while(p!=lst2.end())
	{
		cout<<*p<<" ";
		p++;
	}
	cout<<"\n\n";
	/*lst1.merge(lst2);
	cout<<"Contents 0f lst1 before sorting & doing merging : ";
	p=lst1.begin();
	while(p!=lst1.end())
	{
		//p--;
		cout<<*p<<" ";
		p++;
	}
	cout<<endl;*/
	lst1.sort();
	cout<<"Contents 0f lst1 After sorting in ascending order : ";
	p=lst1.begin();
	while(p!=lst1.end())
	{
		
		cout<<*p<<" ";
		p++;
	}
	cout<<endl;
	lst2.sort();
	cout<<"Contents 0f lst2 After sorting in descending order : ";
	p=lst2.end();
	while(p!=lst2.begin())
	{
		p--;
		cout<<*p<<" ";
		
	}
	lst1.merge(lst2);
	cout<<"\nContents 0f lst1 After sorting & merging : ";
	p=lst1.begin();
	while(p!=lst1.end())
	{
		//p--;
		cout<<*p<<" ";
		p++;
	}
	cout<<endl;
	return 0;
}
