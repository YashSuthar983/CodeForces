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
    while(test--)
    {
        ll x,m;
        cin>>x>>m;
        ll count=0;
        for( int y=1;y<=m;y++)
        {
            ll xr=x^y;
            if (xr == 0) continue;
            if(xr>x*2)
            {
                break;
            }
            if( x!=y&&(y%xr==0||x%xr==0))
            {
                count++;

            }
        }
        cout<<count<<endl;
    }
    return 0;
}