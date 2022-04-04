#include<iostream>
#include<string>
#include<cstring>
using namespace std;
string Binstr,tempstr;
int len,i,j,count=0,k;
void check_input_string(int len)	//checking for '01' in input string
{
	for(i=0;i<len;i++)
	{
		if(i+2>len)
			break;
		if(Binstr.at(i)=='0' && Binstr.at(i+1)=='1')
			count++;
	}
	tempstr=Binstr;	//storing swaped string in temperory string
}

void swap_function()
{
	int k;	//storing temporary counts of '01's in swapped string
    
	//Swapping elements that have index parity is even or odd.
	for(i=0;i<len;i++)
	{   
		Binstr=tempstr;	//Resetting string for swapping 
		for(j=i+2;j<len;j=j+2)
		{
		    k=0;
		    char x=Binstr[i];
		    Binstr[i]=Binstr[j];
		    Binstr[j]=x;
		    for(i=0;i<len;i++)
		    {  
		        if(i+2>len)
		            break;
		        if(Binstr.at(i)=='0' && Binstr.at(i+1)=='1')
		            k++;
		    }
		    //Cheking if no. of '01's in swapped string is less than latest count
		    if(k>count)
		        count=k;
		}
	 }
}

int main()
{
    cout << "Enter the string:";
    cin >> Binstr;
    len=Binstr.length();	//Length of the string
    
    check_input_string(len);
    swap_function();
    cout <<"Swapped Ocurance : " << count << endl;
    return 0;
}
