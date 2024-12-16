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
        int len,m,k;
        cin>>len>>m>>k;
        string str;
        cin>>str;
        int zeros=0;
        int ans=0;
        for(int x=0;x<len;x++)
        {
            if(str[x]=='0')
            {
                zeros++;
            }
            else if(zeros<m)
            {
                zeros=0;
            }

            if(zeros>=m)
            {
                ans++;
                x=x+k-1;
                zeros=0;
            }
        }
        cout<<ans<<"\n";
        
    }
    return 0;
}