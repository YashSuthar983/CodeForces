#include<bits/stdc++.h>
#include<chrono>
#define ll long long
using namespace std;
using namespace std::chrono;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int test;
    cin>>test;
    while(test--)
    {
        ll a,c,len;
        cin>>a>>c>>len;
        ll ans=c;
        for(ll x=0;x<len;x++)
        {
            ll temp;
            cin>>temp;
            if(temp>=a)
            {
                temp=a-1;
            }
            ans+=temp;
        }
        cout<<ans<<"\n";
    }
    return 0;
}