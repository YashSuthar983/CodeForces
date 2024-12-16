#include<bits/stdc++.h>
#define ll long long
using namespace std;
string solve(ll num)
{
    for(ll x=1;x<pow(num,(double)1/3)+3;x++)
    {
        ll ac=pow(x,3);
        ll diff=num-ac;
        ll bc = round(pow(diff, 1.0 / 3));
        //cout<<ac<<" "<<diff<<" "<<bc<<" "<<pow(bc,3)<<endl;
        if(pow(bc,3)==diff&&diff>0)
        {
            return "YES";
        }

    }
    return "NO";
}
int main()
{
    ll test ;
    cin>>test;
    while(test--)
    {
        ll num;
        cin>>num;
        cout<<solve(num)<<endl;
        
    }
    return 0;
}