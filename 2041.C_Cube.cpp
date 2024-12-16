#include<bits/stdc++.h>
#include<chrono>
#define ll long long
using namespace std;
using namespace std::chrono;

int minn(int x, int y, int z)
{
    if (x < y)
    {
        if (x < z)
        {
            return x;
        }
        else
        {
            return z;
        }
    }
    else
    {
        if (y < z)
        {
            return y;
        }
        else
        {
            return z;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;cin>>n;
    ll t=n*n;
    set<ll> x;
    set<ll> y;
    set<ll> z;
    for(int i=0;i<t;i++)
    {
        ll tx,ty,tz;
        cin>>tx>>ty>>tz;
        x.insert(tx);
        y.insert(ty);
        z.insert(tz);
    }
    cout<<minn(x.size(),y.size(),z.size())<<endl;
    return 0;
}