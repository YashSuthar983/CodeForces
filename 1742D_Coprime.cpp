#include<bits/stdc++.h>
#include<chrono>
#define ll long long
using namespace std;
using namespace std::chrono;

void solve()
{
    ll len;
    cin>> len;
    vector<ll> hash(1001,-1);
    for( int x=1;x<=len;x++)
    {
        int temp;
        cin>> temp;
        hash[temp]=x;
    }
    ll ans=-1;
    for( int x=1;x<=1000;x++)
    {
        if(hash[x]!=-1)
        {
            for( int y=1;y<=1000;y++)
            {
                if( hash[y]!=-1&&gcd(x,y)==1)
                {
                    ans=max(ans,hash[x]+hash[y]);
                }
            }
        }
    }
    cout<<ans<<endl;
}

int main()
{
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll test;
    cin>> test;
    while( test--)
    {
        solve();
    }
    return 0;
}