#include<bits/stdc++.h>
#include<chrono>
#define ll long long
using namespace std;
using namespace std::chrono;

int solve(vector<ll> arr,int len)
{
    if( len==1)
    {
        return 0;
    }
    int maxin=len-1;
    for( int x=len-1;x>=1;x--)
    {
        if( arr[x]<=arr[x-1])
        {
            maxin=x-1;
        }
        else
        {
            break;
        }
    }
    int ind;
    for( int x=maxin;x>=1;x--)
    {
        if( arr[x]>=arr[x-1])
        {
            ind =x-1;
        }
        else
        {
            break;
        }
    }

    
    return ind;
}
int main()
{
    
    ll test;
    cin>>test;
    while( test--)
    {
        ll len;
        cin>>len;
        vector<ll> arr( len);
        for( int x=0;x<len;x++)
        {
            cin>>arr[x];
        }

        auto start = high_resolution_clock::now();
        cout<<solve(arr,len)<<endl;
        auto stop = high_resolution_clock::now();
        auto duration = duration_cast<microseconds>(stop - start);
        cout << duration.count() << " microseconds" << endl;
    }
    
    
    return 0;
}