#include<iostream>
#include <bits/stdc++.h>
using namespace std;
 
int CutNumberOfSquares(int,int);
int gcd(int,int);

int main()
{
    int breadth, length;
    cout<<"Enter breadth : "<<endl;
    cin>>breadth;
    cout<<"Enter length : "<<endl;
    cin>>length;
 
    // Call the function CutNumberOfSquares
    cout <<"Answer = "<< CutNumberOfSquares(breadth, length)<<endl;
 
    return 0;
}

// Function to find number of squares
int CutNumberOfSquares(int x, int y)
{
    int s,ans;
    s = gcd(x, y);
 
    ans = (x * y) / (s * s);
 
    return ans;
}

int gcd(int a, int b)
{
    // Everything divides 0
    if (a == 0)
       return b;
    if (b == 0)
       return a;
  
    // base case
    if (a == b)
        return a;
  
    // a is greater
    if (a > b)
        return gcd(a-b, b);
    return gcd(a, b-a);
}
