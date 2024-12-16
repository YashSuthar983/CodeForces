#include<bits/stdc++.h>
#include<chrono>
#define ll long long
using namespace std;
using namespace std::chrono;
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
        vector<ll> feq(2);
        for( int x=0;x<len*2;x++)
        {
            int temp;
            cin>>temp;
            feq[temp]++;
        }
        ll maxon=min(feq[0],feq[1]);
        ll min=feq[1]%2;
        cout<<min<<" "<<maxon<<endl;
        
    }
    return 0;
}