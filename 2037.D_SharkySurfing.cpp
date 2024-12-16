#include<bits/stdc++.h>
#include<chrono>
#define ll long long
using namespace std;
using namespace std::chrono;

void solve()
{
    ll ob,pw,end;
    cin>>ob>>pw>>end;
    vector<vector<ll>> obs;
    for( ll x=0;x<ob;x++)
    {
        ll s,e;
        cin>>s>>e;
        obs.push_back({s,e});
    }
    vector<vector<ll>> pwr;
    for( ll x=0;x<pw;x++)
    {
        ll p,pp;
        cin>>p>>pp;
        pwr.push_back({p,pp});
    }

    ll jumppower=1;
    priority_queue<ll> pq;
    ll j=0;
    ll ans=0;
    for( auto& x: obs)
    {
        while(j<pw&&pwr[j][0]<x[0])
        {
            pq.push(pwr[j][1]);
            j++;
        }
        while(jumppower<(x[1]-x[0]+2)&&!pq.empty())
        {
            jumppower+=pq.top();
            pq.pop();
            ans++;
        }
        if(jumppower<(x[1]-x[0]+2))
        {
            ans=-1;
            break;
        }
    }
    cout<<ans<<"\n";

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int test;
    cin>>test;
    while(test--)
    {
        solve();

    }
    return 0;
}