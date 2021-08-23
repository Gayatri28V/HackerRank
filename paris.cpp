//Given an array of integers and a target value, determine the number of pairs of array elements that have a difference equal to the target value.



#include <iostream>
#include <algorithm>
using namespace std;
  

int countPairsWithDiffK(int arr[], int n, int k)
{
    int count = 0;
    sort(arr, arr+n);  
 
    int l = 0;
    int r = 0;
    while(r < n)
    {
         if(arr[r] - arr[l] == k)
        {
              count++;
              l++;
              r++;
        }
         else if(arr[r] - arr[l] > k)
              l++;
         else 
              r++;
    }  
    return count;
}
 

{
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
        cout<< countPairsWithDiffK(arr, n, k);
    return 0;
}




