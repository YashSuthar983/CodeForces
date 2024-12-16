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
    cin>>test;
    while( test--)
    {
        int len,k;
        cin>>len>>k;
        vector<int> arr(len);
        ll sum=0;
        for(auto&x:arr)
        {
            cin>>x;
            sum+=x;
        }
        if(sum<=k)
        {   
            cout<<k-sum<<"\n";
            continue;

        }
        sort(arr.rbegin(),arr.rend());
        ll prev=arr[0];
        int ans=0;
        for(int x=1;x<len;x++)
        {
            if(prev==k)
            {
                ans=0;
                break;
            }
            if( prev<k&&prev+arr[x]>k)
            {
                ans=k-prev;
                break;
            }
            prev+=arr[x];
        }
        cout<<ans<<"\n";
    }
    return 0;
}