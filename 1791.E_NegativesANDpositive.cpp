#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(vector<ll> arr ,ll n)
{
    
    ll possum=0;
    ll negsum=0;
    ll negcount=0;
    bool ze=false;
    ll mn=INT_MAX;
    for(ll x=0;x<n;x++)
    {
        ll temp=arr[x];
        if(temp<0)
        {
            negsum+=temp;
            negcount++;
            mn=min(mn,abs(temp));
        }
        else if (temp==0)
        {
            ze=true;
        }
        else
        {
            mn=min(mn,abs(temp));
            possum+=temp;
        }
        
    }
    ll sum=possum+abs(negsum);
    if(!ze)
    {
        //int mn=min(*min_element(pos.begin(),pos.end()),abs(*max_element(neg.begin(),neg.end())));
        
        if(negcount%2!=0)
        {
            sum-=mn*2;
        }
        
    }
    cout<<sum<<endl;
}

int main()
{
    ll test;
    cin>>test;
    while(test--)
    {
        ll n;
        cin>>n;
        vector<ll> arr(n);
        for(ll x=0;x<n;x++)
        {
            cin>>arr[x];
        }
        solve(arr,n);
    }

    return 0;
}
