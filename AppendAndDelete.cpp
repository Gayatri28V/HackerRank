#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'appendAndDelete' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts following parameters:
 *  1. STRING s
 *  2. STRING t
 *  3. INTEGER k
 */

string appendAndDelete(string s, string t, int k)
 {
   if((s.length()+t.length())<k)
   
       return "Yes";
       int commonLength=0;
       for(int i=0;i<min(s.length(),t.length());i++)
       
       {
           if(s[i]==t[i])
           commonLength++;
           else {
           break;
           }
       }
       if (s.size()-commonLength+t.size()-commonLength<=k&& (s.size()-commonLength+t.size()-commonLength)%2==k%2)
        return "Yes";
 
   
    return "No";
   
}

int main()
{
    int k;
    string s;
    getline(cin, s);

    string t;
    getline(cin, t);

    cin>>k;

    string result = appendAndDelete(s, t, k);

    cout << result << "\n";
    return 0;
}

