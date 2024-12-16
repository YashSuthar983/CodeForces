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
        ll x,m;
        cin>>x>>m;
        ll count=0;
        
        vector<ll> arr;
        int prev;
        bool first=false;
        int lessthan=0;
        for( int y=1;y<=m;y++)
        {
            ll xr=x^y;
            if( xr%x==0||xr%y==0)
            {
                count++;
                cout<<y<<endl;
                if(y>9)
                {
                    if(!first)
                    {
                        prev=y;
                        first=true;
                        continue;
                    }
                    arr.push_back(y-prev);
                    int temp=prev;
                    prev=y;
                    if(prev!=(y-prev)&&(y-prev)==arr[0])
                    {
                        break;
                    }
                    
                    
                    
                }
                else
                {
                    lessthan++;
                }
            }
        }
        cout<<count<<endl;
    }
    return 0;
}