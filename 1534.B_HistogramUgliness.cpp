#include<bits/stdc++.h>
#include<chrono>
#define ll long long
using namespace std;
using namespace std::chrono;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int test;
    cin>> test;
    while( test--)
    {
        int n;
        cin>> n;
        vector<ll> arr(n+2);
        for( int x=1;x<=n;x++)
        {
            int temp;
            cin>>temp;
            arr[x]=temp;
        }

        ll ans=0;
        for(int x=1;x<=n;x++)
        {

            ll dif=min(arr[x],max(arr[x-1],arr[x+1]));
            ans+=arr[x]-dif+abs(dif-arr[x-1]);
            arr[x]=dif;
            // if(arr[x]>arr[x-1]&&arr[x]>arr[x+1])
            // {
            //     //ans+=abs(arr[x]-max(arr[x-1],arr[x+1]));
            //     ans++;
            //     arr[x]=min(arr[x],max(arr[x-1],arr[x+1]));
            // }
        }
        ans+=arr[n];
        // for(int x=1;x<=n;x++)
        // {
        //     if(x==1)ans+=arr[x];
        //     else
        //     {
        //         ans+=abs(arr[x]-arr[x-1]);
        //     }
        // }
        cout<<ans<<endl;
    }
    return 0;
}