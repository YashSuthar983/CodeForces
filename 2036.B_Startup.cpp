#include<bits/stdc++.h>
#include<chrono>
#define ll long long
using namespace std;
using namespace std::chrono;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll test;
    cin>>test;
    while( test--)
    {
        int n,k;
        cin>>n>>k;
        vector<ll> arr(k+1,0);
        for( int x=0;x<k;x++)
        {
            int b,c;
            cin>>b>>c;
            arr[b]+=c;

        }
        sort(arr.rbegin(),arr.rend());
        ll ans=0;
        
        if(n>=k)
        {
            cout<<accumulate(arr.begin(),arr.end(),0ll)<<endl;
            continue;
        }
        for(int x=0;x<n;x++)
        {
            ans+=arr[x];
        }
        cout<<ans<<endl;
    }
    return 0;
}