#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

int subArraySum(int arr[],int n,int l,int r,int x)
{   
    vector<int> v;
    int sum=0;
    for(int i=l-1;i<r;i++)
    {
       sum+=arr[i]; 
       v.push_back(i);
    }
   int count=0;
    for (int i = 0;  i<v.size();i++)
    {
        if(v[i]==0)
        count++;
    }
    int ans;
    ans=sum+count*x;
    return ans;
}



int main() {
	
    
    int q;
    cin>>q;
    while(q--)
    {
    int n;
    cin>>n;
    int x;
    int l;
    int r;
    cin>>x;
    cin>>l;
    cin>>r;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
   
    cout<<subArraySum(arr,n,l,r,x)<<" ";
    }
}
