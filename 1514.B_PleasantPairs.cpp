#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        ll len;
        cin>>len;
        vector<ll> arr(len+1);
        for( ll x=1;x<=len;x++)
        {
            cin>>arr[x];
        }
        ll ans=0;
        for( ll x=1;x<=len;x++)
        {
            for(ll y=arr[x]-x;y<=len;y+=arr[x])
            {
                if((y>=0)&&x<y)
                {
                    if((x+y)==(arr[x]*arr[y]))
                    {
                        ans++;
                    }
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}