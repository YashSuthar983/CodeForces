#include<bits/stdc++.h>
#include<chrono>
#define ll long long
using namespace std;
using namespace std::chrono;

pair<ll,ll> mm(ll num)
{
    pair<ll,ll> temp;
    temp.first=INT_MAX;
    temp.second=0;

    while( num>0)
    {
        ll t=num%10;
        temp.first=min(temp.first,t);
        temp.second=max(temp.second,t);
        num/=10;
    }
    //cout<<temp.first<<" "<<temp.second<<endl;
    return temp;
}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll test;
    cin>>test;
    while( test--)
    {
        ll num,k;
        cin>>num>>k;
        k--;
        ll ans=num;
        while(k--)
        {
            pair<ll,ll> temp=mm(ans);
            if( temp.first==0)
            {
                break;
            }
            ans+=(temp.second*temp.first);
        }
        cout<<ans<<endl;
    }
    // auto start = high_resolution_clock::now();
    // auto stop = high_resolution_clock::now();
    // auto duration = duration_cast<microseconds>(stop - start);
    // cout << duration.count() << endl;
    
    return 0;
}