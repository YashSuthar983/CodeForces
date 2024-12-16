#include<bits/stdc++.h>
#include<chrono>
#define ll long long
using namespace std;
using namespace std::chrono;

string solve(ll a,ll b)
{
    vector<int> av;
    while( a>0)
    {
        av.push_back(a%10);
        a/=10;
    }
    reverse(av.begin(),av.end());
    
    vector<int> bv;
    while( b>0)
    {
        bv.push_back(b%10);
        b/=10;
    }
    if(av.size()>bv.size())
    {
        int ze=av.size()-bv.size();
        while( ze--)
        {
            bv.push_back(0);
        }
    }
    reverse(av.begin(),av.end());
    for( int x=0;x<av.size();x++)
    {
        if((av[x]+bv[x])>9)
        {
            return "HARD";
        }
    }
    return "EASY";
    
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll a,b;
    cin>>a>>b;
    if(a<b)
    {
        ll temp=a;
        a=b;
        b=temp;
    }
    cout<<solve(a,b);
    return 0;
}