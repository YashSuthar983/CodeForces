#include<bits/stdc++.h>
#include<chrono>
#define ll long long
using namespace std;
using namespace std::chrono;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int len;
    cin>>len;
    string s;
    cin>>s;
    int o=0;
    int l=0;
    for(char x:s)
    {
        if(x=='L')l++;
        if(x=='O')o++;
    }
    int l1=0;
    int o1=0;
    for(int x=0;x<len-1;x++)
    {
        if(l1==0&&o1==0)
        {
            if(s[x]=='L')
            {
                l1++;
                l--;
            }
            if(s[x]=='O')
            {
                o1++;
                o--;
            }
            continue;
        }
        if(l1==l||o1==o)
        {
            if(s[x]=='L')
            {
                l1++;
                l--;
            }
            if(s[x]=='O')
            {
                o1++;
                o--;
            }
        }
        else
        {
            break;
        }
    }
    if(l1==l||o1==o)
    {
        cout<<"-1\n";
    }
    else
    {
        cout<<l1+o1<<"\n";
    }
    return 0;
}