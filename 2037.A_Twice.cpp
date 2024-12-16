#include<bits/stdc++.h>
#include<chrono>
#define ll long long
using namespace std;
using namespace std::chrono;

int solve(vector<ll> arr,ll len)
{
    // vector<bool> checks(len,true);
    ll count=0;
    // for(int x=0;x<len;x++)
    // {
    //     if(!checks[x]){continue;}
    //     for(int y=x+1;y<len;y++)
    //     {
    //         if(!checks[y]){continue;}
    //         if( arr[x]==arr[y])
    //         {
    //             checks[x]=false;
    //             checks[y]=false;
    //             count++;
    //         }
    //     }
    // }

    unordered_map<ll,ll> feq;
    for( int x=0;x<len;x++)
    {
        feq[arr[x]]++;
    }

    for( auto x:feq)
    {
        count+=x.second/2;
    }
    return count;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll test;
    cin>>test;
    while( test--)
    {
        ll len;
        cin>>len;
        vector<ll> arr(len);
        for( int x=0;x<len;x++)
        {
            cin>>arr[x];
        }
        cout<<solve(arr,len)<<endl;
    }
    return 0;
}