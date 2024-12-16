#include<bits/stdc++.h>
#include<chrono>
#define ll long long
using namespace std;
using namespace std::chrono;

ll solve(ll mx,ll my,ll mz,ll k)
{
    ll tx,ty,tz;
    ll ans=0;
    for( ll x=1;x<=mx;x++)
    {
        if(k%x==0)
        {
            ll mxrem=k/x;
            for( ll y=1;y<=my;y++)
            {
                if(mxrem%y==0)
                {
                    ll mzrem=mxrem/y;
                    if(mzrem<=mz)
                    {
                        tx=x,ty=y,tz=mzrem;
                        ans=max((mx-tx+1)*(my-ty+1)*(mz-tz+1),ans);
                        
                    }
                }
            }
        }
    }
    return ans;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int test;
    cin>>test;
    while( test--)
    {
        ll mx,my,mz,k;
        cin>>mx>>my>>mz>>k;
        int tx,ty,tz;
        cout<<solve(mx,my,mz,k)<<"\n";
        
        //cout<<(mx-ans[0]+1)*(my-ans[1]+1)*(mz-ans[2]+1)<<"\n";
    }
    return 0;
}