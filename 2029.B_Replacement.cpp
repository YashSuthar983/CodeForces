#include<bits/stdc++.h>
#include<chrono>
#define ll long long
using namespace std;
using namespace std::chrono;

void solve()
{
    int len;
        cin>>len;
        string s;
        string op;
        cin>>s>>op;
        int cnt0=count(s.begin(),s.end(),'0');
        int cnt1=len-cnt0;
        for(int x=0;x<len-1;x++)
        {
            int bre=0;
            if(cnt0==0||cnt1==0)
            {
                cout<<"NO\n";
                return ;
            }

            if(op[x]=='1')
            {
                cnt0--;
            }else
            {
                cnt1--;
            }
        }

        cout<<"YES\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int test;
    cin>> test;
    while( test--)
    {
        solve();
        
    }
    return 0;
}