#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int len;
    string s;
    cin>>len;
    cin>>s;
    vector<int> checks(26);
    for(char x:s)
    {
        if(x>=65&&x<=90)
        {
            checks[x-'A'] = 1;
        }
        if(x>=97&&x<=122)
        {
            checks[x-'a'] = 1;
        }
    }
    // for( int x:checks)
    // {
    //     cout<<x<<endl;
    // }
    if(find(checks.begin(),checks.end(),0)!=checks.end())
    {
        cout<<"NO"<<endl;
    }
    else
    {
        cout<<"YES"<<endl;
    }
    return 0;
}