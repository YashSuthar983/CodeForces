#include<bits/stdc++.h>
#include<chrono>
#define ll long long
using namespace std;
using namespace std::chrono;

void solve(vector<ll> arr,ll len)
{
    len=len-2;
    vector<vector<ll>> fact;
    for( int i=1;i<=sqrt(len);i++)
    {
        int a;
        int b;
        if(len%i==0)
        {
            a=i;
            b=len/i;
            //cout<<i<<" "<<len/i<<" ";
            fact.push_back({a,b});
        }
        
    }
    sort(arr.begin(),arr.end());
    for(vector<ll> x:fact)
    {
        vector<bool> checks(len,true);
        int che=0;
        auto apos=find(arr.begin(),arr.end(),x[0]);
        if(apos!=arr.end()&&checks[apos-arr.begin()])
        {
            checks[apos-arr.begin()]=false;
            che++;
        }
        auto bpos=find(apos+1,arr.end(),x[1]);
        if(bpos!=arr.end()&&checks[bpos-arr.begin()])
        {
            checks[bpos-arr.begin()]=false;
            che++;
        }
        //cout<<apos-arr.begin()<<" "<<bpos-arr.begin()<<endl;
        if(che==2)
        {
            cout<<x[0]<<" "<<x[1]<<endl;
            break;
        }
        
    }
    
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll test;
    cin>> test;
    while(test--)
    {
        ll len;
        cin>>len;
        vector<ll> arr( len);
        for( int x=0;x<len;x++)
        {
            cin>>arr[x];
        }

        solve(arr,len);
    }
    return 0;
}