#include<bits/stdc++.h>
#include<chrono>
#define ll long long
using namespace std;
using namespace std::chrono;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,k;cin>>n>>k;
    vector<ll> lecture(n);
    vector<ll> status(n);
    for( auto &x:lecture)
    {
        cin>>x;
    }
    for( auto &x:status)
    {
        cin>>x;
    }
    
    
    ll sum=0;
    for(int x=0;x<n;x++)
    {
        if( status[x])
        {
            sum+=lecture[x];
        }
    }
    int start=1;
    ll temp=0;
    for(int x=0;x<k;x++)
    {
        if(!status[x])
        {
            temp+=lecture[x];
        }
    }
    ll ans=temp;
    // if( k==n)
    // {
    //     cout<<temp+sum<<endl;
    //     return;
    // }
    while( start<=n-k)
    {
        // ll temp=0;
        // for( int x=start;x<start+k;x++)
        // {
        //     if(!status[x]){temp+=lecture[x];}
        // }
        // sum=max(sum,temp);
        if(!status[start-1])
        {
            temp-=lecture[start-1];
        }
        if(!status[start+k-1])
        {
            temp+=lecture[start+k-1];
        }
        ans=max(temp,ans);
        start++;
    }

    
    cout<<(sum+ans)<<endl;
    return 0;
}