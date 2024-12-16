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
        ll len;
        cin>>len;
        string s;
        cin>>s;
        string ans;
        bool con=true;
        for( int x=1;x<len;x++)
        {
            if(s[x-1]>s[x])con=false;
        }
        if(con){cout<<s<<endl;continue;}
        for(int x=0;x<len;x++)
        {
            if(s[x]!='0'){break;}
            ans.push_back('0');
        }
        ans.push_back('0');
        for( int x=len-1;x>=0;x--)
        {
            if(s[x]!='1'){break;}
            ans.push_back('1');
        }
        cout<<ans<<endl;
    }
    return 0;
}