#include<bits/stdc++.h>
#define ll long long
using namespace std;

bool sign(ll x)
{
    return x>0;
}
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        ll len;
        cin>>len;
        vector<ll> arr(len);
        for ( int x=0;x<len;x++)
        {
            cin>>arr[x];
        }
        ll ans=0;
        for(int x=0;x<len;x++ )
        {
            int y =x;
            ll mx=arr[x];
            while ( y<len&&sign(arr[x])==sign(arr[y]))
            {
                mx=max(mx,arr[y]);
                y++;
            }
            ans+=mx;
            x=y-1;

        }
        cout <<ans<<endl;
    }

    return 0;
}
