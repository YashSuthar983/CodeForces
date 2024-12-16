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
    cin>> test;
    while( test--)
    {
        ll a,b,c;
        cin>>a>>b>>c;
        if((a+b)==c)
        {
            cout<<"YES"<<endl;
            continue;
        }
        else if((a+c)==b)
        {
            cout<<"YES"<<endl;
            continue;
        }
        else if((b+c)==a)
        {
            cout<<"YES"<<endl;
            continue;
        }

        cout<<"NO"<<endl;
    }
    return 0;
}