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
        int n;
        cin>>n;
        int ans=0;
        for(int x=1;x<n;x++)
        {
            for(int y=1;y<n;y++)
            {
                if((x+y)==n)
                {
                    ans++;
                }
            }
        }
        cout<<ans<<"\n";
    }
    return 0;
}