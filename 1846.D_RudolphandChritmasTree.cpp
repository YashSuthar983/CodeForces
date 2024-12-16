#include<bits/stdc++.h>
#define ll long long
#define dl long double
using namespace std;
int main()
{
    ll test ;
    cin>> test;
    while( test--)
    {
        ll tris,base,height;
        cin>>tris>>base>>height;
        vector<ll> arr(tris);
        for(ll x=0;x<tris;x++)
        {
            cin>>arr[x];
        }
        dl area=(dl)base*height/2.0;
        //cout<<area<<"   st"<<endl;
        if(arr.size()==1)
        {
            cout<<area<<endl;
            continue;
        }
        for(ll x=tris-2;x>=0;x--)
        {
            
            if((arr[x+1]-arr[x])<height)
            {
                ll theight=arr[x+1]-arr[x];
                dl tratio=(dl)(height-theight)/(dl)height;
                dl ttbase=(dl)base*tratio;
                area+=((dl)((ttbase+base)*theight)/2.0);
                //cout<<theight<<"  "<<tratio<<"  "<<ttbase<<"  ";
                
            }
            else
            {
                area+=base*height/2.0;
            }
            //cout<<area<<"  mid   "<<endl;
            
        }
        cout<<fixed<<setprecision(7)<<area<<endl;
    }

    return 0;
}