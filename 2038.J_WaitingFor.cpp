#include<bits/stdc++.h>
#include<chrono>
#define ll long long
using namespace std;
using namespace std::chrono;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll test;
    cin>>test;
    int p=0;
    int b=0;
    while( test--)
    {
        char x;
        cin>> x;
        int y;
        cin>> y;
        if( x=='P')
        {
            p+=y;
        }
        else
        {
            b=y;
            if(b-p<0)
            {
                p=p-b;
                b=0;
            }
            else if( b-p>=0)
            {
                b=b-p;
                p=0;
                
            }
            if(b>0)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }

        }
    }
    return 0;
}