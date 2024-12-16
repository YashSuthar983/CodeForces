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
        int n,len;
        cin>>n>>len;
        vector<string> arr(n);
        for(auto &x:arr)
        {
            cin>>x;
        }
        int ans=INT_MAX;
        for(int x=0;x<n;x++)
        {
            for(int y=x+1;y<n;y++)
            {
                int val=0;;
                for(int z=0;z<len;z++)
                {
                    val+=abs(arr[x][z]-arr[y][z]);
                }
                ans=min(ans,val);
            }
        }
        cout<<ans<<"\n";
    }
    return 0;
}