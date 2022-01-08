#include <bits/stdc++.h>

using namespace std;
int pickingNumbers(vector<int>&arr,int n)
{
   sort(arr.begin(),arr.end());
    int pos=0,count=1,max=0;
    for(int i=1;i<n;i++)
    {
        int diff;
        diff=arr[i]-arr[pos];
        if(diff<=1)
        count++;
        else {
        
            if(count>max)
            max=count;
            pos=i;
            count=1;
            }
    }
    if(count>max)
    max=count;
    return max;
}
int main()
{
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++)
    cin>>arr[i];
    cout<<pickingNumbers(arr,n);
    
}
