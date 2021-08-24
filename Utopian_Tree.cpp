//The Utopian Tree goes through 2 cycles of growth every year. Each spring, it doubles in height. Each summer, its height increases by 1 meter.

//A Utopian Tree sapling with a height of 1 meter is planted at the onset of spring. How tall will the tree be after  growth cycles?
#include <bits/stdc++.h>

using namespace std;
int main () {

    int t;
    cin>>t;     

 for (int i=0;i<t;i++){
     int height=1;       
     int n;        
     cin>>n;

     if (n==0){         
        cout<<height<<endl;
     }
     else {
     for (int j=1;j<=n;j++){

//summer
         if (j%2==0){      
             height=height+1;
         }

 //spring
         else {
             height=height*2;      
         }
      }
      cout<<height<<endl;   
     }
    }
}    









