/* Sample Input

5
2 4 6 8 3
Sample Output

2 4 6 8 8 
2 4 6 6 8 
2 4 4 6 8 
2 3 4 6 8 */

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
    int key;
    key=arr[n-1];
    for(int i=n-1;i>=0;i--)
    {
        int j=i-1;
        for(int k=0;k<n;k++)
        {
            if(arr[j]>key)
            {
               arr[j+1]=arr[j]; 
            }
           else
           {
               arr[j+1]=key;
               i=-1;
           }
           cout<<arr[k]<<" ";
        }
        cout<<endl;
    }
}
