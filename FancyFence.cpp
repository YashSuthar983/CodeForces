#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        int a;
        cin>>a;
        int n=3;
        while(true)
        {
            float intang=(float)((n-2)*180)/(float)n;
            if( a==intang)
            {
                cout<<"YES"<<endl;
                break;
            }
            if( a<intang)
            {
                cout<<"NO"<<endl;
                break;
            }
            n++;
        }
    }
    return 0;
}