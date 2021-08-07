//Problwm statement: Two children, Lily and Ron, want to share a chocolate bar. Each of the squares has an integer on it.
//Lily decides to share a contiguous segment of the bar selected such that:
//The length of the segment matches Ron's birth month, and,
//The sum of the integers on the squares is equal to his birth day.
//Determine how many ways she can divide the chocolate.
//Approach : here i have used the concept of prefix sum.

//PREFIX SUM ::Given an array arr[] of size n, its prefix sum array is another array prefixSum[] of the same size, such that the value of prefixSum[i] is arr[0] + arr[1] + arr[2] … arr[i].
//Examples : 
/*Input  : arr[] = {10, 20, 10, 5, 15}
Output : prefixSum[] = {10, 30, 40, 45, 60}

Explanation : While traversing the array, update 
the element by adding it with its previous element.
prefixSum[0] = 10, 
prefixSum[1] = prefixSum[0] + arr[1] = 30, 
prefixSum[2] = prefixSum[1] + arr[2] = 40 and so on.


code*/
#include <bits/stdc++.h>

using namespace std;


int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int m,d;
    cin>>d>>m;
    int prefixSum[n] ;

    prefixSum[0] = arr[0] ;
    for(int i=1;i<n;i++)
    prefixSum[i]=prefixSum[i-1]+arr[i];
    int sum=0,count=0;
     sum=prefixSum[m-1];
     if(sum==d)
     count++;
     int index=0;
     for(int i=m;i<n;i++)
     {
         int value=prefixSum[i]-prefixSum[index];
         if(value==d)
         count++;
         
         index++;
     }
     cout<<count<<endl;

}
