#include<bits/stdc++.h>
#include<chrono>
#define ll  long long
using namespace std;
using namespace std::chrono;


void solve( vector<ll> arr,ll mad)
{
    ll mimdamge=LLONG_MAX;
    ll start=0;
    ll end=mad;
    ll mid=end-(end-start)/2;
    while (start<=mid)
    {
        ll damagesum=0;
        for(ll x=1;x<arr.size();x++)
        {
            if(arr[x]-arr[x-1]<=mid)
            {
                damagesum+=arr[x]-arr[x-1];
            }
            else
            {
                damagesum+=mid;
            }
        }
        damagesum+=mid;
        
        if(damagesum>mad)
        {
            end=mid-1;
            mimdamge=min(mimdamge,mid);
        }
        else if(damagesum==mad)
        {
            mimdamge=min(mimdamge,mid);
            cout<<mimdamge<<endl;
            return ;
        }
        else
        {
            start=mid+1;
        }
        
        mid=end-(end-start)/2;
        
       
    }
    cout<<mimdamge<<endl;
    
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll test;
    cin>> test;
    while( test--)
    {
        ll att,mdamage;
        cin>>att>>mdamage;
        vector<ll> attarr(att);
        for( int x=0;x<att;x++)
        {
            cin>>attarr[x];
        }
        solve(attarr,mdamage);
    }
    return 0;
}   