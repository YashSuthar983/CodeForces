#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll opp,ind;
    cin>>opp>>ind;
    if( ind&1)
    {
        cout<<1<<endl;
        return 0;
    }
    for(ll x=pow(2,opp), y=opp+1;x>=2,y>=2;x/=2,y--)
    {
        if(ind%x==0)
        {
            cout<<y<<endl;
            return 0;
        }
    }
    return 0;
}