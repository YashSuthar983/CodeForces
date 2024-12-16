#include<bits/stdc++.h>
#include<chrono>
#define ll long long
using namespace std;
using namespace std::chrono;

string solve( vector<ll> arr)
{
    unordered_map <ll,ll> feq;
    for( int x=0;x<arr.size();x++)
    {
        feq[arr[x]]++;
        if(feq[arr[x]]>1 )
        {
            return "NO";
        }
    }
    return "YES";
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

        cout<<solve(arr)<<endl;
    }
    return 0;
}