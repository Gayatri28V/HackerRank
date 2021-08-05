#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int grade;
    for(int i=1;i<=n;i++)
    {
        cin>>grade;
        
        if(grade<38) {
            cout<<grade<<"\n";
            continue;
        }
        
        if(5-(grade%5)<3) {
            grade= grade+ 5-(grade%5);
            cout<<grade<<"\n";
        }
        else cout<<grade<<"\n";
    }
   
    
}
