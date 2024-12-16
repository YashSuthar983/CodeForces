#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{   
    ll len;
    cin>>len;
    vector< ll > arr;
    for (int x =0;x<len;x++)
    {
        int temp;
        cin>>temp;
        arr.push_back(temp);
    }
    vector<ll > sor;
    sor.insert(sor.begin(),arr.begin(),arr.end());
    sort(sor.begin(),sor.end());

    vector<ll> original(len + 1, 0);
    vector<ll> sorted(len + 1, 0);

    for(int x=1;x<=len;x++)
    {
        original[x]=original[x-1]+arr[x-1];
        sorted[x]=sorted[x-1]+sor[x-1];

    }
    ll cas;
    cin>>cas;
    for(int x=0;x<cas;x++)
    {
        int type;
        cin>>type;
        int l;
        cin>>l;
        int r;
        cin>>r;

        if(type==1)
        {
            cout<<original[r]-original[l-1]<<endl;
        }
        else
        {
            cout<<sorted[r]-sorted[l-1]<<endl;
        }
    }
    return 0;
}


