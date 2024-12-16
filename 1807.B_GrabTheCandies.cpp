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
        int e=0;
        int o=0;
        for(int x=0;x<len;x++)
        {
            int temp;
            cin>>temp;
            if(temp%2==0)
            {
                e+=temp;
            }
            else
            {
                o+=temp;
            }
        }
        if(e>o)
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