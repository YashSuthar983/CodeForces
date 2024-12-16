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
        ll k,l1,r1,l2,r2;
        cin>>k>>l1>>r1>>l2>>r2;
        ll ans=0;
        
        
        for(int x=l1;x<=r1;x++)
        {
            for(int i=0;i<=10e9;i++)
            {
                ll ai=x*pow(k*1ll,i);
                if(ai>=l2&&ai<=r2)
                {
                    ans++;
                }
                if(ai>r2)
                {
                    break;
                }
            }
        }
        cout<<ans<<"\n";

    }
    return 0;
}