//Given an array of bird sightings where every element represents a bird type id, determine the id of the most frequently sighted type. If more than 1 type has been spotted that maximum amount, return the smallest of their ids.
//Sample Input 1
11
1 2 3 4 5 4 3 2 1 3 4
//Sample Output 1
3
  
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
   sort(arr,arr+n);
   int max=0,count=1;
   int id=arr[0];
   for(int i=0;i<n;i++)
   {
       if(arr[i]==arr[i+1])
        count ++;
        else
   {
       
       if(count>max)
      {
           max=count;
           count =1;
           id=arr[i];
      }
   }
   
   }
   cout<<id;
}
