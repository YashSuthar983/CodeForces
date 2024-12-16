#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        int a,b;
        cin>>a>>b;
        //int count=0;
        
        cout<<min({(a+b)/3,a,b})<<endl;

        // while(true)
        // {
        //     if ((a==1&&b==1)||(a==0||b==0))
        //     {
        //         break;
        //     }
        //     if(a>b)
        //     {
        //         a=a-2;
        //         b--;
        //     }
        //     else
        //     {
        //         b=b-2;
        //         a--;

        //     }
        //     count++;
            
            
        // }
        //cout<<count<<endl;
    }
    return 0;
}