#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll test;
    cin>>test;
    while( test--)
    {
        ll sum,terms;
        cin>>sum>>terms;
        if(terms*terms>sum )
        {
            cout<<"NO"<<endl;
        }
        else if((sum%2!=0&&terms%2!=0)||((sum%2==0)&&(terms%2==0)))
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}