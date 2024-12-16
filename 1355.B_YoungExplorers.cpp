#include<bits/stdc++.h>
#include<chrono>
#define ll long long
using namespace std;
using namespace std::chrono;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll test;
    cin>> test;
    while( test--)
    {
        int len ;
        cin>>len;
        vector<ll> arr(len);
        for( int x=0;x<len;x++)
        {
            cin>>arr[x];
        }

        sort(arr.begin(),arr.end());
        vector<ll> feq(len+1,0);
        ll mx=0;
        for( int x=0;x<len;x++)
        {
            if( (x+1)>=arr[x])
            {
                if ((x - arr[x]) >= 0) 
                {
                    feq[x] = 1 + feq[x - arr[x]];
                    //cout<<"yup"<<endl;
                } else {
                    feq[x] = 1;
                    //cout<<"NOP"<<endl;
                }
            }
            // int cnt=0;
            // for( int y=x;x>=0;)
            // {
            //     if(y-arr[y]>=-1)
            //     {
            //         y=y-arr[y];
            //         cnt++;
            //     }
            //     else
            //     {
            //         break;
            //     }
            // }
            // feq.push_back(cnt);
            mx=max(mx,feq[x]);

        }
        cout<<mx<<endl;
    }

    return 0;
}