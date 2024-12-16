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
        char a;
        cin>>a;
        int bre=0;

        for(int x=0;x<s.size();x++)
        {
            if(s[x]==a)
            {
                if(x%2==0&&(s.size()-x-1)%2==0)
                {
                    bre=1;
                    break;
                }
            }
        }
        if(bre)
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