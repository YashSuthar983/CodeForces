#include<bits/stdc++.h>
#include<chrono>
#define ll long long
using namespace std;
using namespace std::chrono;
ll mindiv(ll num)
{
    for( ll x=2;x<=sqrt(num);x++)
    {
        if( num%x==0)
        {
            return x;
        }
    }
    return num;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll test;
    cin>> test;
    
    while( test--)
    {
        ll l,r;
        cin>>l>>r;
        int i=0;
        for( ll x=l;x<=r;x++)
        {
            ll midiv=mindiv(x);
            if(midiv!=x)
            {
                cout<<midiv<<" "<<x-midiv<<endl;
                i=1;
                break;
            }
        }
        if(i==0)
        {
            cout<<-1<<endl;
        }
        

        // ll temp =l;
        // ll b=l%2;
        // l-=b;
        // b=l;
        // if( b==0)
        // {
        //     b=2;
        // }
        // ll a=2;
        // if( (a+b)>=l&&(a+b)<=r)
        // {
        //     cout<<a<<" "<<b<<endl;
        //     continue;
        // }

        // a=-1;
        // for( ll x=2;(x*x)<=temp;x++)
        // {
        //     if(temp%x==0)
        //     {
        //         a=x;
        //         b=temp-x;
        //         break;
        //     }
        // }
        // if(a==-1)
        // {
        //     cout<<a<<endl;
        // }
        // else
        // {
        //     cout<<a<<" "<<b<<endl;
        // }
    }
    return 0;
}