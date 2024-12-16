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
        string s;
        cin>>s;
        if(s[0]=='1'&&s[1]=='0'&&s[2]!='0'&&s[2]>'1'&&s.size()<4)
        {
            cout<<"YES\n";
        }
        else if(s[0]=='1'&&s[1]=='0'&&s[2]!='0'&&s.size()>=4)
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