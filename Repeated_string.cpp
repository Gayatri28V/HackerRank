/*There is a string,s , of lowercase English letters that is repeated infinitely many times. Given an integer, n,
find and print the number of letter a's in the first n letters of the infinite string.*/


#include <bits/stdc++.h>

using namespace std;

using namespace std;
int main(){
    string s;
    cin >> s;
    long long n;
    cin >> n;
    long long count=0;
    for (int i=0;i<s.size();i++) 
    {
       if (s[i]=='a') 
       count++;
    }
   count*=n/s.size(); 
    for (int i=0;i<n%s.size();i++) 
    {
      if (s[i]=='a') 
      count++;  
    }
    cout << count << endl;
    return 0;
}
