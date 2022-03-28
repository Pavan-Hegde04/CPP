#include<iostream>
#include<string>
#include<map>
#include<cstring>
using namespace std;
class name
{
	char str_n[40];
	public:
		name()
		{
			strcpy(str_n,"");
		}
		name(char *s)
		{
			strcpy(str_n,s);
		}
		char *get()
		{
			return str_n;
		}
};
bool operator<(name a,name b)
{
	return strcmp(a.get(),b.get())<0;
}
class phonenum
{
	char str_p[80];
	public:
		phonenum()
		{
			strcpy(str_p,"");
		}
		phonenum(char *s)
		{
			strcpy(str_p,s);
		}
		char *get()
		{
			return str_p;
		}
};
int main()
{
	map<name,phonenum>directory;
	map<name,phonenum>::iterator p;
	directory.insert(pair<name,phonenum>(name("Emp1"),phonenum("555-111-223")));
	directory.insert(pair<name,phonenum>(name("Emp2"),phonenum("555-111-224")));
	directory.insert(pair<name,phonenum>(name("Emp3"),phonenum("555-111-225")));
	directory.insert(pair<name,phonenum>(name("Emp4"),phonenum("555-111-226")));
	directory.insert(pair<name,phonenum>(name("Emp5"),phonenum("555-111-227")));
	
	
	char str[80];
	cout<<"Enter Name ";
	cin>>str;
	
	p=directory.find(name(str));
	if(p!=directory.end())
		cout<<"Name : "<<str<<"\tPhone num. : "<<p->second.get() <<p->first.get();
	else
		cout<<"Not in directory\n";
	cout<<endl;
	return 0;
}
