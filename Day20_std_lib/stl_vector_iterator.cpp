//begin()
//end()
//empty()
//push_back()
//erase()
//clear()

#include<iostream>
#include<vector>
using namespace std;

int main()
{
	vector<char> v(10);
	vector<char> ::iterator p;
	vector<char> ::iterator q;
	int i;
	
	p=v.begin();  //begin()
	i=0;
	while(p!=v.end())  //end()
	{
		*p=i+'a';
		p++;
		i++;
	}
	
	cout<<"Original contents: \n";
	p=v.begin();
	while(p!=v.end())
	{
		cout<<*p<<" ";
		p++;
	}
	
	p=v.begin();
	while(p!=v.end())
	{
		*p=toupper(*p);
		p++;
	}
	cout<<"\n\nModified contents: \n";
	
	p=v.begin();
	while(p!=v.end())
	{
		cout<<*p<<" ";
		p++;
	}
	cout<<"\n";
	
	p=v.begin();
	p=p+3;
	v.insert(p,3,'z');
	cout<<"\nAfter inserting\n";
	
	p=v.begin();
	while(p!=v.end())
	{
		cout<<*p<<" ";
		p++;
	}
	cout<<"\n";
	
	p=v.begin();
	p=p+3;
	v.erase(p);
	cout<<"\nAfter eraising z at 4th position\n";
	
	p=v.begin();
	while(p!=v.end())
	{
		cout<<*p<<" ";
		p++;
	}
	cout<<"\n";
	
	p=v.begin();
	q=v.begin();
	p=p+3;
	q=q+5;
	v.erase(p,q);
	cout<<"\nAfter eraising z at 4th & 5th position\n";
	
	p=v.begin();
	while(p!=v.end())
	{
		cout<<*p<<" ";
		p++;
	}
	
	cout<<"\n";
	
	v.clear();
	
	if(v.empty())
		cout<<"\nvector is empty"<<endl;
	else
		cout<<"\nvector is not empty"<<endl;
	return 0;
}

