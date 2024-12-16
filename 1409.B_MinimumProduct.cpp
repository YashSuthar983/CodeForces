#include<bits/stdc++.h>
#define ll long long
//#include <chrono>
using namespace std;
//using namespace std::chrono;
ll solve(ll a,ll b,ll al,ll bl,ll n)
{
    ll x=a;
    ll y=b;
    ll i=n;
    ll diff=a-n;
    if(diff<al)
    {
        x=al;
        y=y-(n-(a-x));
        if(y<bl)
        {
            y=bl;
        }
    }
    else
    {
        x=diff;
        
    }
    // while(i--)
    // {
    //     if(x>al)
    //     {
    //         x--;
    //     }
    //     else if( y>bl)
    //     {
    //         y--;
    //     }
    // }
    ll m1=x*y;
    x=a;
    y=b;
    i=n;
    diff=b-n;
    if(diff<bl)
    {
        y=bl;
    
        x=x-(n-(b-y));
        if(x<al)
        {
            x=al;
        }
    }
    else
    {
        y=diff;
        
    }
    // while(i--)
    // {
    //     if(y>bl)
    //     {
    //         y--;
    //     }
    //     else if( x>al)
    //     {
    //         x--;
    //     }
    // }
    ll m2=x*y;
    
    cout<<min(m1,m2)<<endl;
    return 0;
    
}
int main()
{
    ll test;
    cin>>test;
    

    
    while( test--)
    {
        ll a,b,al,bl,n;
        cin>>a>>b>>al>>bl>>n;
        //auto start = high_resolution_clock::now();
        solve(a,b,al,bl,n);
        //auto stop = high_resolution_clock::now();
    //auto duration = duration_cast<microseconds>(stop - start);

    //cout << "Time taken by function: "
        //<< duration.count() << " microseconds" << endl;
        
    }
    
    return 0;
}