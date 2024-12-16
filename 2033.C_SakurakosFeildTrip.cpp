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
    cin>> test;
    while( test--)
    {
        ll len;
        cin>> len;
        vector<ll> arr(len);
        for( int x=0;x<len;x++)
        {
            cin>>arr[x];
        }

        for( int x=(len/2)-1;x>=1;x--)
        {
            if(arr[x]==arr[x-1]||arr[len-x-1]==arr[len-x])
            {
                swap(arr[x-1],arr[len-x]);
            }
        }

        ll ans=0;
        for( int x=1;x<len;x++)
        {
            if( arr[x-1]==arr[x])
            {
                ans++;
            }
        }
        cout<<ans<<endl;

    }
    return 0;
}