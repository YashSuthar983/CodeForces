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
    cin>> test;
    while(test--)
    {
        string s;
        cin>>s;
        int a=s[0]-'0';
        int b=s[2]-'0';
        if(s[1]=='>')
        {
            if(a>b)
            {
                cout<<s<<endl;
            }
            else if (a==b)
            {
                cout<<a<<"="<<b<<endl;
            }
            
            else
            {
                cout<<a<<"<"<<b<<endl;
            }
        }
        else if(s[1]=='<')
        {
            if(a<b)
            {
                cout<<s<<endl;
            }
            else if (a==b)
            {
                cout<<a<<"="<<b<<endl;
            }
            else
            {
                cout<<a<<">"<<b<<endl;
            }
        }
        else if(s[1]=='=')
        {
            if(a==b)
            {
                cout<<s<<endl;
            }
            else
            {
                if(a>b)
                {
                    cout<<a<<">"<<b<<endl;
                }
                else
                {
                    cout<<a<<"<"<<b<<endl;
                }
            }
        }
    }
    return 0;
}