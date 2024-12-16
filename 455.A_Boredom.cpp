#include<bits/stdc++.h>
#include<chrono>
#define ll long long
using namespace std;
using namespace std::chrono;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll len;
    cin>>len;
    unordered_map<ll,ll> feq;
    vector<ll> arr;
    for(ll x=0;x<len;x++)
    {
        ll temp;
        cin>>temp;
        feq[temp]++;
    }
    for( auto&x:feq)
    {
        arr.push_back(x.first);
    }

    sort(arr.begin(),arr.end());

    ll dp2=0;
    ll dp1=feq[arr[0]]*arr[0];
    ll dp=dp1;
    for(ll x=1;x<arr.size();x++)
    {
        if(arr[x]==arr[x-1]+1)
        {
            dp=max(dp1,dp2+feq[arr[x]]*arr[x]);
            
        }
        else
        {
            dp= dp1+feq[arr[x]]*arr[x];
        }
        dp2=dp1;
        dp1=dp;
    }
    cout<<dp<<"\n";
    return 0;
}