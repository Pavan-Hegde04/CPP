#include<iostream>
#include<list>
using namespace std;
int main()
{
	list<int>lst;
	list<int>lst1;
	list<int>lst2;
	list<int>lst3;
	list<int>lst4;
	list<int>lst5;
	list<int>::iterator ptr1=lst.begin(),ptr2=lst.end();
	list<int>::iterator ptr3=lst1.begin(),ptr4=lst1.end();
	list<int>::iterator ptr5=lst2.begin(),ptr6=lst2.end();
	list<int>::iterator ptr7=lst3.begin(),ptr8=lst3.end();
	list<int>::iterator ptr9=lst4.begin(),ptr10=lst4.end();
	list<int>::iterator ptr11=lst5.begin(),ptr12=lst5.end();
	int N,S;
	cout<<"Enter Size of Queue : ";
	cin>>N;
	cout<<"Size of Subset : ";
	cin>>S;
	
	
	//assign the elements
	for(int i=0;i<N;i++)
	{
		lst.push_back(i);
	}
	
	ptr1=lst.begin();
	for(int i=0;i<S;i++)
	{
		lst1.push_back(i);
	}
	ptr3=lst1.begin();
	while(ptr3!=lst1.end())
	{
		cout<<*ptr3<<" ";
		ptr3++;
	}
	cout<<"\n\n";
	
	
	ptr1=(lst.begin()+1);
	for(int i=0;i<S;i++)
	{
		lst2.push_back(i);
	}
	ptr5=lst2.begin();
	while(ptr5!=lst2.end())
	{
		cout<<*ptr5<<" ";
		ptr5++;
	}
	cout<<"\n\n";
	
	ptr1=(lst.begin()+2);
	for(int i=0;i<S;i++)
	{
		lst3.push_back(i);
	}
	ptr7=lst3.begin();
	while(ptr7!=lst3.end())
	{
		cout<<*ptr7<<" ";
		ptr7++;
	}
	cout<<"\n\n";
	
	ptr1=(lst.begin()+3);
	for(int i=0;i<S;i++)
	{
		lst4.push_back(i);
	}
	ptr9=lst4.begin();
	while(ptr9!=lst4.end())
	{
		cout<<*ptr9<<" ";
		ptr9++;
	}
	cout<<"\n\n";
	
	ptr1=(lst.begin()+4);
	for(int i=0;i<S;i++)
	{
		lst5.push_back(i);
	}
	ptr11=lst5.begin();
	while(ptr11!=lst5.end())
	{
		cout<<*ptr11<<" ";
		ptr11++;
	}
	cout<<"\n\n";
	
	
}
