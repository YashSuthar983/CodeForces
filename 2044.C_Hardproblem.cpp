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
        ll m,a,b,c;
        cin>>m>>a>>b>>c;
        ll ans=min(m,a)*1ll+min(m,b)*1ll;
        if(m>a)
        {
            ll temp=min(m-a,c);
            c-=temp;
            ans+=temp;
        }
        if(m>b)
        {
            ll temp=min(m-b,c);
            c-=temp;
            ans+=temp;

        }
        cout<<ans<<"\n";
    }
    return 0;
}