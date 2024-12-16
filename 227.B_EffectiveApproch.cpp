#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll len,op1=0,op2=0;
    cin>>len;
    vector<ll> arr(len);
    unordered_map<ll,ll> feq;
    for(ll x=0;x<len;x++)
    {
        cin>>arr[x];
        feq[arr[x]]=x+1;
    }
    ll qlen;
    cin>>qlen;
    vector<ll> ser(qlen);
    
    for(ll x=0;x<qlen;x++)
    {
        cin>>ser[x];
        if(feq.find(ser[x])!=feq.end())
        {
            op1+=feq[ser[x]];
            op2+=len-feq[ser[x]]+1;
        }
    }
    // for(int y:ser)
    // {
    //     for(int x=len-1;x>=0;x--)
    //     {
    //         op2++;
    //         if(arr[x]==y)
    //         {
                
    //             break;
    //         }
    //     }
    // }

    cout<<op1<<" "<<op2;
    return 0;
}
