#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(ll l,ll r, ll i,ll k)
{
    ll num=0;
    ll mod = (1LL << i);
    //cout<<mod<<endl;
    ll len=(r-l)+1;
    ll pairs=len/2;
    ll pairleft=0;
    ll left=0;
    if( len%2!=0)
    {
        if(r%2==0)
        {
            num^=r;
            r--;
        }
        else    
        {
            num^=l;
            l++;
        }
        //cout<<"Length"<<endl;
    }
    if( pairs%2!=0)
    {
        pairleft++;
        num^=pairleft;
        //cout<<"pair"<<endl;
    }
    ll ind=0;
    for(ll x=l;x<=r;x++)
    {
        //cout<<x<<endl;
        if(x%mod==k)
        {
            //cout<<x<<"  asfafas   "  <<endl;
            ind=x;
            break;
        }
    }
    //cout <<ind<<endl;
    for(ll x=ind;x<=r;x+=mod)
    {

        //cout<<x<<endl;
        num^=x;
        //cout<<num<<endl;
    }
    // for(int x=k;x<=r;x+=(mod*ind))
    // {
        
    //     if(x>=l)
    //     {
    //         cout<<x<<endl;
    //         num^=x;
    //     }
    //     ind++;
    // }
    
    //int idex=0;
    //int limit=(r-l)/2;
    
    // while((idex)<=limit)
    // {
    //     if(l==r&&limit%2==0)
    //     {
    //         num^=l;
    //         break;
    //     }
    //     if(l%mod!=k)
    //     {
    //         num^=l;
            
    //     }
    //     if(r%mod!=k)
    //     {
    //         num^=r;
            
    //     }
    //     l++;
    //     r--;
    //     idex++;

    // }
    // for(ll x=l;x<=r;x++)
    // {
    //     if(x%mod!=k)
    //     {
    //         num^=x;
    //     }
    // }
    // for(ll x=st;x<=r;x++)
    // {
        
    // }
    cout<<num<<endl;
}

int main()
{
    ll test;
    cin>>test;
    while(test--)
    {
        ll l,r,i,k;
        cin>>l>>r>>i>>k;
        solve(l,r,i,k);
    }
    return 0;
}