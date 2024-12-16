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
        int num;
        cin>>num;
        string s;
        cin>>s;
        bool ans=false;
        if(s[0]-'0'||s[num-1]-'0')
        {
            ans=true;
        }
        else
        {
            for(int x=1;x<num;x++)
            {
                if(s[x]-'0'&&s[x-1]-'0')
                {
                    ans=true;
                    break;
                }
            }
        }
        
        if( ans)
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