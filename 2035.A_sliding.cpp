#include<bits/stdc++.h>
#include<chrono>
#define ll unsigned long long
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
        ll n,m,x,y;
        cin>>n>>m>>x>>y;
        ll ans=0;
        if(x==n)
        {
            ans+=m-y;
        }
        else
        {
            //ans=(n-x)*2ll*m;
            ans=(n-x)*(m-1)+(n-x)*m+(m-y);
            
            
        }
        cout<<ans<<"\n";
    }
    return 0;
}