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
        int len;
        cin>>len;
        string s;
        cin>>s;
        if(s[0]=='1'&&s[len-1]=='1')
        {
            cout<<"YES\n";
            continue;
        }
        int s11=0;
        for( int x=0;x<len-1;x++)
        {
            if(s.substr(x,2)=="11")
            {
                s11++;
            }
        }
        
        if(s11>=2||(s11>=1 &&(s[0]=='1'||s[len-1]=='1')))
        {
            cout<<"YES\n";
            continue;
        }
        if(s.find("111")!=string::npos)
        {
            cout<<"YES\n";
            continue;
        }
        cout<<"NO\n";


    }
    return 0;
}