#include<iostream>
#include <bits/stdc++.h>
using namespace std;

void printMax(int arr[], int n, int k)
{
    std::deque<int> Queue(k);
    
    int i;
    for (i = 0; i < k; ++i)
    {
        while ((!Queue.empty()) && arr[i] >= arr[Queue.back()])
           
             // Remove from rear
            Queue.pop_back();
 
        // Add new element at rear of queue
        Queue.push_back(i);
    }
    cout<<"Maximum elements of subset of Queue : \n";
    for (; i < n; ++i)
    {
        cout << arr[Queue.front()] << " ";
 
        // Remove the elements which
        // are out of this window
        while ((!Queue.empty()) && Queue.front() <=i - k)
            // Remove from front of queue
            Queue.pop_front();
        while ((!Queue.empty()) && arr[i] >=arr[Queue.back()])
            Queue.pop_back();
 
        // Add current element at the rear of Qi
        Queue.push_back(i);
    }
    cout << arr[Queue.front()];
    cout<<endl;
    cout<<endl;
}

void printMin(int arr[], int n, int k)
{
    std::deque<int> Queue(k);
    
    int i;
    for (i = 0; i < k; ++i)
    {
        
        while ((!Queue.empty()) && arr[i] <= arr[Queue.back()])
           
             // Remove from rear
            Queue.pop_back();
 
        // Add new element at rear of queue
        Queue.push_back(i);
    }
    cout<<"Minimum elements of subset of Queue : \n";
    for (; i < n; ++i)
    {
        cout << arr[Queue.front()] << " ";
 
        // Remove the elements which
        // are out of this window
        while ((!Queue.empty()) && Queue.front() <=i - k)
            // Remove from front of queue
            Queue.pop_front();
        while ((!Queue.empty()) && arr[i] <=arr[Queue.back()])
            Queue.pop_back();
 
        // Add current element at the rear of Qi
        Queue.push_back(i);
    }
    cout << arr[Queue.front()];
    cout<<endl;
    cout<<endl;
}

void printsubset(int arr[], int n, int k)
{
	static int i=0;
	static int j;
	cout<<"Subset of Queue are : \n"; 
		//starting point
	    for (i; i <n-2; i++)
	    {
		//ending point
		for (j=i; j<k; j++)
		{		    
		    cout<<arr[j]<<" ";
		}
		k=k+1;
		cout<<endl;
	    }
	 
	cout<<endl;
	cout<<endl;
}
 
// Driver code
int main()
{
    int N,S;
    cout<<"Enter Size of Queue : ";
    cin>>N;
    cout<<"Size of Subset : ";
    cin>>S;
    int arr[N];
    cout<<"Enter Elements of Queue: \n";
    for(int i=0;i<N;i++)
    {
    	cin>>arr[i];
    }
    cout<<"Elements of Queue are : \n";
    for(int i=0;i<N;i++)
    {
    	cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<endl;
    
    printsubset(arr,N,S);
    printMax(arr, N, S);
    printMin(arr, N, S);
    
    return 0;
}
