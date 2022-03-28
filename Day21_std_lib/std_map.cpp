#include<iostream>
#include<map>
using namespace std;
int main()
{
	map<char,int>m;
	int i;
	map<char,int>::iterator p;
	for(i=0;i<26;i++)
	{
		m.insert(pair<char,int>('A'+i,65+i));
	}
	p=m.begin();
	while(p!=m.end())
	{
		cout<<" "<<p->first<<" "<<p->second<<endl;
		p++;
	}
	cout<<endl;
	char ch;
	cout<<"Enter key(an uppercase letter) ";
	cin>>ch;
	
	p=m.find(ch);
	if(p!=m.end())
		cout<<"Its ASCII value is "<<p->second;
	else
		cout<<"Key not in map. \n";
	cout<<endl;
	return 0;
}
