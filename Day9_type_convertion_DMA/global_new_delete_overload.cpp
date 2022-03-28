#include<iostream>
#include<stdlib.h>
using namespace std;

void * operator new(size_t abc)
{
	void *ptr;
	cout<<"overloading new operator "<<endl;
	ptr=malloc(abc);
	if(ptr==NULL)
	{
		cout<<"could not allocate the memory"<<endl;
		//return;
	}
	return ptr;
}
void operator delete(void *ptr)
{
	cout<<"overloading delete operator "<<endl;
	free(ptr);
}
void * operator new[](size_t abc)
{
	void *ptr;
	cout<<"overloading new[] operator "<<endl;
	ptr=malloc(abc);
	if(ptr==NULL)
	{
		cout<<"could not allocate the memory"<<endl;
		//return;
	}
	return ptr;
}
void operator delete[](void *ptr)
{
	cout<<"overloading delete[] operator "<<endl;
	free(ptr);
}


class location
{
	int lon,lat;
	public:
		location()
		{
			lon=0;lat=0;
			cout<<"Default inst."<<endl;
		}
		location(int a,int b)
		{
			lon=a;
			lat=b;
			cout<<"Parameterized inst."<<endl;
		}
		void disp()
		{
			cout<<"coordinates of location are, longitude : "<<lon<<"\t latitude : "<<lat<<endl;
		}
		~location()
		{
			cout<<"destructor called"<<endl;
		}
};

int main()
{
	location l1,l2(10,5),*ptr;
	l2.disp();	
	ptr=new location(2,2);
	ptr->disp();
	delete ptr;
	int *pt=new int;
	delete pt;
	return 0;
}
