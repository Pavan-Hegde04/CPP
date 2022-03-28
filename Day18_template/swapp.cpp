#include<iostream>
using namespace std;

/*template <typename T,typename T2>
T2 swap(T *n1, T2 *n2)
{
	T2 temp;
	temp=*n1;
	*n1=*n2;
	*n2=temp;
	
}*/

template <typename T,typename T2>
T swap(T &n1, T &n2)
{
	T temp;
	temp=n1;
	n1=n2;
	n2=temp;
	
}
int main()
{
	double C=10.32;
	int E=10;
	char G='A';
	string A="Nidhi";
	double D=25.54;
	int F=30;
	char H='Z';
	string B="pavan";
	double i=11,j=22;
	
	cout<<"before swaping"<<endl;
	cout<<"A= "<<A<<" B= "<<B<<endl;
	swap(A,B);
	cout<<"after swaping"<<endl;
	cout<<"A= "<<A<<" B= "<<B<<endl;
	cout<<endl;
	cout<<"before swaping"<<endl;
	cout<<"a= "<<i<<" b= "<<j<<endl;
	//swap(&i,&j);
	swap(i,j);
	cout<<"after swaping"<<endl;
	cout<<"a= "<<i<<" b= "<<j<<endl;
	cout<<endl;
	cout<<"before swaping"<<endl;
	cout<<"C= "<<C<<" D= "<<D<<endl;
	//swap(&C,&D);
	swap(C,D);
	cout<<"after swaping"<<endl;
	cout<<"C= "<<C<<" D= "<<D<<endl;
	cout<<endl;
	cout<<"before swaping"<<endl;
	cout<<"E= "<<E<<" F= "<<F<<endl;
	//swap(&E,&F);
	swap(E,F);
	cout<<"after swaping"<<endl;
	cout<<"E= "<<E<<" F= "<<F<<endl;
	cout<<endl;
	cout<<"before swaping"<<endl;
	cout<<"G= "<<G<<" H= "<<H<<endl;
	//swap(&G,&H);
	swap(G,H);
	cout<<"after swaping"<<endl;
	cout<<"G= "<<G<<" H= "<<H<<endl;
	return 0;
}
