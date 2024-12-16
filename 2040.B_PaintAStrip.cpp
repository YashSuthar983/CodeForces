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
        if(len==1)
        {
            cout<<"1\n";
        }
        else if(len<=4)
        {
            cout<<"2\n";
        }
        else
        {
            int ans=3;
            ll i=10;
            while(i<len)
            {
                i=(i+1)*2;
                ans++;
            }
            cout<<ans<<"\n";
        }

    }
    return 0;
}