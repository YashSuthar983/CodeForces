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
        cin>>s ;
        int one=0;
        for(int x=0;x<len;x++)
        {
            if(s[x]=='1')
            {
                one++;
            }
        }

        if(one==2&&s.find("11")!=string::npos)
        {
            cout<<"NO\n";
            continue;
        }
        if(one%2==0)
        {
            cout<<"YES\n";
        }
        else
        {
            cout<<"NO\n";
        }
    }
    return 0;
}