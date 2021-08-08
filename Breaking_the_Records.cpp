/*Maria plays college basketball and wants to go pro. Each season she maintains a record of her play. She tabulates the number of times she breaks her season record for most points and least points in a game. Points scored in the first game establish her record for the season, and she begins counting from there.

Example

Scores are in the same order as the games played. She tabulates her results as follows:

                                     Count
    Game  Score  Minimum  Maximum   Min Max
     0      12     12       12       0   0
     1      24     12       24       0   1
     2      10     10       24       1   1
     3      24     10       24       1   
     
     
     code::*/
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,highestScore,lowestScore,increase=0,decrease=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    highestScore=arr[0];
    lowestScore=arr[0];
    for(int i=1;i<n;i++)
    {
      if(highestScore<arr[i])
      {
          highestScore=arr[i];
          increase++;
      }  
      if(lowestScore>arr[i])
      {
          lowestScore=arr[i];
          decrease++;
      }
    }
    cout<<increase<<" "<<decrease;
}
     
