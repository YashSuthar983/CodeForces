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
        //set<string> hash;
        string pre="";
        int ans=len-1;
        for( int x=1;x<len-1;x++)
        {
            if(s[x-1]==s[x+1] )
            {
                ans--;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}