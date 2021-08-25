/*Two cats and a mouse are at various positions on a line. You will be given their starting positions. Your task is to determine which cat will reach the mouse first, assuming the mouse does not move and the cats travel at equal speed. If the cats arrive at the same time, the mouse will be allowed to move and it will escape while they fight.

You are given q queries in the form of x ,y , and z representing the respective positions for cats A and B, and C for mouse . Complete the function  to return the appropriate answer to each query, which will be printed on a new line.

If cat A catches the mouse first, print Cat A.
If cat B catches the mouse first, print Cat B.
If both cats reach the mouse at the same time, print Mouse C as the two cats fight and mouse escapes.*/
  #include <bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        int x,y,z;
        cin>>x>>y>>z;
        int a,b;
        a=abs(x-z);
       b=abs(y-z);
        if(a<b)
        cout<<"Cat A"<<endl;
        else if(b<a)
        cout<<"Cat B"<<endl;
        else  {
        cout<<"Mouse C"<<endl;
        }
        
    }
}


  
