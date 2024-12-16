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
        ll a,b,r;
        cin>>a>>b>>r;
        for(int x=0;x<=r;x++)
        {
            cout<<abs((a^x)-(b^x))<<"     "<<x<<"\n";
        }
    }
    return 0;
}