#include<iostream>
using namespace std;

template<typename T1,int N>
class myseq
{
	T1 memblock [N];
	public:
		void setmem(int x,T1 value);
		T1 getmem(int x);
};

template<typename T1, int N>
void myseq<T1,N>::setmem(int x,T1 value)
{
	memblock[x]=value;
}

template<typename T1, int N>
T1 myseq<T1,N>::getmem(int x)
{
	return memblock[x];
}
int main()
{
	myseq<int,5>my_ints;
	myseq<double,5>my_floats;
	my_ints.setmem(0,100);
	my_floats.setmem(3,3.14);
	for(int i=0;i<5;i++)
	{
		cout<<my_ints.getmem(i)<<"\t";
	}
	cout<<endl;
	cout<<my_floats.getmem(3)<<endl;
	return 0;
}
