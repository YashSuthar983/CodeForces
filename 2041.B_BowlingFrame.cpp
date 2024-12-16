#include<bits/stdc++.h>
#include<chrono>
#define ll long long
using namespace std;
using namespace std::chrono;

int max(ll n)
{
    return n*(n+1)/2;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll test;
    cin>>test;
    while( test--)
    {
        ll w,b;
        cin>>w>>b;
        ll sum=w+b;
        int i=1;
        while( true)
        {
            if(max(i)>sum)
            {
                cout<<i-1<<endl;
                break;
            }
            i++;
        }

    }
    return 0;
}