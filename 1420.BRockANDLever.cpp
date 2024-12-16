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
    while(test--)
    {
        ll len;
        cin>>len;
        vector<ll> arr(len);
        for( int x=0;x<len;x++)
        {
            cin>>arr[x];
        }
        vector<ll> feq(32,0);
        for( ll x: arr)
        {
            ll temp=x;
            ll count=0;
            while( temp>0)
            {
                temp/=2;
                count++;
            }
            feq[count-1]++;
        }
        ll ans=0;
        for( int x=0;x<32;x++)
        {
            if(feq[x]>=2)
            {
                ans+=(feq[x]*(feq[x]-1))/2;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}