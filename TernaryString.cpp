#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin>>test;
    while( test--)
    {
        string s;
        cin>>s;
        vector<pair<char,int>>v;
        int k=-1;
        for ( char x:s)
        {
            if(k==-1||v[k].first!=x)
            {
                v.push_back({x,1});
                k++;
            }
            else
            {
                v[k].second++;
            }
        }
        int ans=INT_MAX;
        // for( auto x:v)
        // {
        //     cout<<x.first<<" "<<x.second<<endl;

        // }
        for( int x=1;x<v.size()-1;x++)
        {
            if(v[x-1].first!=v[x+1].first)
            {
                ans=min(ans,v[x].second+2);
            }
        }
        if(ans==INT_MAX)
        {
            cout<<0<<endl;
        }
        else
        {
            cout<<ans<<endl;

        }
    }
    
    return 0;
}