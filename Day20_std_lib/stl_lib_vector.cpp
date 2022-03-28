#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<char> v(10);  //create a vector of length 10
	int i;
	
	//display original size of v
	cout<<"size = "<<v.size()<<endl;
	
	//assign the elements of the vector some values
	for(i=0;i<10;i++)
	{
		v[i]=i+'a';
	}
	
	//display contents of vector
	cout<<"\ncurrent contents: \n";
	for(i=0;i<v.size();i++)
	{
		cout<<v[i]<<" ";
	}
	cout<<"\n\n";
	
	cout<<"Expanding vector\n";
	
	/*put more values onto the end of the vector, it will grow as needed*/
	for(i=0;i<10;i++)
	{
		v.push_back(i+10+'a');
	}
	
	//display current size of v
	cout<<"size now = "<<v.size()<<endl;
	
	//display contents of vector
	cout<<"\ncurrent contents: \n";
	for(i=0;i<v.size();i++)
	{
		cout<<v[i]<<" ";
	}
	cout<<"\n\n";
	
	//change contents of vector
	for(i=0;i<v.size();i++)
	{
		v[i]=toupper(v[i]);
	}
	cout<<"Modified contents: \n";
	for(i=0;i<v.size();i++)
	{
		cout<<v[i]<<" ";
	}
	cout<<"\n\n";
	
	return 0;
}
