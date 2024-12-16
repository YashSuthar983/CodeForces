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
    while(test--)
    {
        int n;cin>>n;
        string s;
        cin>>s;
        int ans=0;
        for( int x=1;x<n;x++)
        {
            if( s[x-1]==s[x])
            {
                ans++;
            }
        }
        cout<<ceil(ans/2.0)<<endl;
    }
    return 0;
}