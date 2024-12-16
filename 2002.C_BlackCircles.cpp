#include<bits/stdc++.h>
#include<chrono>
#define ll long long
using namespace std;
using namespace std::chrono;
ll diatanc(ll x1,ll y1,ll x2,ll y2)
{
    return 1ll*(x2-x1)*(x2-x1)+1ll*(y2-y1)*(y2-y1);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int test;
    cin>>test;
    while(test--)
    {
        ll n;
        cin>>n;
        vector<pair<ll,ll>> circles;
        for(int x=0;x<n;x++)
        {
            ll t1,t2;
            cin>>t1>>t2;
            circles.push_back({t1,t2});
        }
        ll a1,b1,a2,b2;
        cin>>a1>>b1>>a2>>b2;
        ll targetdistance=diatanc(a1,b1,a2,b2);
        ll bre=0;
        for(auto &x:circles)
        {
            if(diatanc(x.first,x.second,a2,b2)<=targetdistance)
            {
                bre=1;
                break;
            }
        }
        cout<<(bre?"NO\n":"YES\n");
    }
    return 0;
}