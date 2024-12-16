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
        int worrds,m;
        cin>>worrds>>m;
        int ans=0;
        int cur=0;
        while (worrds--)
        {
            string s;
            cin>>s;
            cur+=s.size();
            if(cur<=m)
            {
                ans++;
            }
        }
        cout<<ans<<"\n";
        
    }
    return 0;
}