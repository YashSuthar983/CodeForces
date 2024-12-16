#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll len,ans=0;
    cin>> len;
    vector<ll> arr(len);
    for( ll x=0;x<len;x++)
    {
        cin>>arr[x];
    }
    ll mi=*min_element(arr.begin(),arr.end());
    ll lb = find(arr.begin(),arr.end(),mi)-arr.begin();
    // ll ub = find(arr.rbegin(),arr.rend(),mi)-arr.rbegin();
    // cout<<mi<< " "<<lb<<" "<<ub<<endl;
    // ans+=mi*len;
    // ans+=(lb)+(ub);
    // if( ub==0&&lb==len-1)
    // {
    //     ans=(mi+1)*len;
    //     ans--;
    // }
    int cnt=0,mx=0;
    for( int x=0;x<len;x++)
    {
        if(arr[(x+lb)%len]>mi)
        {
            cnt++;
        }
        else
        {
            cnt=0;
        }
        mx=max(mx,cnt);
    }
    ans=mi*len+mx;
    cout<< ans<<endl;
    return 0;
}