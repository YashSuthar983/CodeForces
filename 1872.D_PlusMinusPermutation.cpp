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
    while(test--)
    {
        ll n,x,y;
        cin>> n>>x>>y;
        ll lcm=x*y/gcd(x,y);
        int intersect=n/lcm;
        x=n/x;
        y=n/y;
        x-=intersect;
        y-=intersect;

        ll ans=0;
        // for( int i=1;i<=y;i++)
        // {
        //     ans-=i;
        // }
        // for( int i=n;i>=n-x+1;i--)
        // {
        //     ans+=i;
        // }
        cout<<(n-x+n+1)*(n-(n-x+1)+1)/2-(y*(y+1))/2<<endl;
        //cout<<ans<<endl;
    }
    return 0;
}