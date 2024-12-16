#include<bits/stdc++.h>
#include<chrono>
#define ll long long
using namespace std;
using namespace std::chrono;

int solve(string s,pair<int,int>& ans)
{
    int cnt=0;
    for(char x:s)
    {
        if(x=='#')
        {
            cnt++;
        }
    }
    
    return cnt;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int test;
    cin>>test;
    while(test--)
    {
        int n,m;
        cin>>n>>m;
        pair<int,int> ans;
        int mx=0;
        for(int x=0;x<n;x++)
        {
            string s;
            cin>>s;
            int temp=solve(s,ans);
            if(mx<temp)
            {
                ans.second=s.find('#')+(temp/2)+1;
                ans.first=x+1;
                mx=temp;
            }
        }
        cout<<ans.first<<" "<<ans.second<<"\n";
    }
    return 0;
}