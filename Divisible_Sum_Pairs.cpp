//Given an array of integers and a positive integer k , determine the number of (i,j) pairs where i>j and arr[i] + arr[j] is divisible by k.

#include <bits/stdc++.h>

using namespace std;

int divisible(int arr[],int n, int k)
{
   
    int sum=0 ,count=0;
    for(int i=0;i<n-1;i++)
    {
        sum=0;
        for(int j=i+1;j<n;j++)
        {
            sum=arr[i]+arr[j];
            if(sum%k==0)
            count ++;
        }
    }
    return count;
}
int main()
{
     int n,k;
    cin>>n>>k; 
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];   // ERROR
    }
    cout<<divisible(arr,n,k);
}
       
