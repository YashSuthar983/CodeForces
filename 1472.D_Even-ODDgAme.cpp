#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll test;
    cin>> test;
    while( test--)
    {
        ll len;
        cin>>len;
        vector<ll> arr(len);
        for(ll x=0;x<len;x++)
        {
            cin>>arr[x];
        }
        sort(arr.rbegin(),arr.rend());
        ll ans=0;
        bool alice=true;
        for(ll x:arr)
        {
            cout<<x<<"------"<<endl;
            if( x%2==0&&alice)
            {
                ans+=x;
            }
            if( x%2!=0&&!alice)
            {
                ans-=x;
            }
            cout<<ans<<" ========"<<endl;
            alice=!alice;
        }

        if( ans==0)
        {
            cout<<"Tie"<<endl;
        }
        else if(ans>0)
        {
            cout<<"Alice"<<endl;
        }
        else
        {
            cout<<"Bob"<<endl;
        }
        
    }
    return 0;
}

