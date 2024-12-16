#include<bits/stdc++.h>
#include<chrono>
#define ll long long
using namespace std;
using namespace std::chrono;


// void solve(unordered_map<ll,ll>arr,ll len,ll mx )
// {
//     vector<ll> res(len,mx);
//     for (const auto& x : arr) {
//         if( x.second==(len*(len-1))/2) break;
//         if (x.second == len ) {
//             ll t1=x.second/2;
//             ll t2=x.second/2+1;
//             while (true)
//             {
//                 auto found1 = find_if(arr.begin(), arr.end(), [&t1](const auto& p){return p.second == t1;});
//                 auto found2 = find_if(arr.begin(), arr.end(), [&t2](const auto& p){return p.second == t2;});
//                 if (found1 == arr.end()&&found1 == arr.end()) 
//                 {
//                     if (len - t1 - 1 >= 0 && len - t2 - 1 >= 0) 
//                     {
//                         res[len - t1 - 1] = x.first;
//                         res[len - t2 - 1] = x.first;
//                         break;
//                     }
//                 } 
//                 else 
//                 {
//                     t1--;
//                     t2++;
//                 }
//             }
            
//         } else {
//             if (len - x.second - 1 >= 0) {
//                 res[len - x.second - 1] = x.first;
//             }
//         }
//     }
//     for (int x : res) {
//         cout << x << " ";
//     }
//     cout << endl;
// }

void solve(vector<ll> arr ,ll len)
{
    
    ll t=(len*(len-1))/2;
    for( ll x=0;x<t;x+=--len)
    {
        cout<<arr[x]<<" ";
    }
    cout << 1000000000 << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll test ;
    cin>>test;
    while( test--)
    {
        ll len;
        cin>>len;
        // unordered_map<ll,ll> arr;
        // ll mx=LONG_MIN;
        // for(int x=0;x<(len*(len-1))/2;x++)
        // {
        //     ll temp ;
            
        //     cin>>temp;
        //     arr[temp]++;
        //     mx=max(mx,temp);
        // }
        vector<ll> arr((len*(len-1))/2,0);
        for( int x=0;x<(len*(len-1))/2;x++)
        {
            cin>>arr[x];
        }
        sort(arr.begin(),arr.end());
        solve(arr,len);
    }
    
    return 0;
}

