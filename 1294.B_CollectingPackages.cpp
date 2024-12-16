#include<bits/stdc++.h>
#include<chrono>
#define ll long long
using namespace std;
using namespace std::chrono;



bool compare(vector<ll> a, vector<ll> b) 
{
    if (a[0] ==b[0])return a[1]<b[1];
    return a[0] <b[0];
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll test;
    cin>>test;
    while(test--)
    {
        ll n;
        cin>>n;
        vector<vector<ll>> packs;
        for( int i=0;i<n;i++)
        {
            vector<ll> temp(2);
            for(auto&x:temp)
            {
                cin>>x;
            }
            packs.push_back(temp);
        }

        sort(packs.begin(), packs.end(), compare);
        string path="";
        int cx=0;
        int cy=0;
        bool pos=true;

        for(vector<ll> x:packs)
        {
            if(x[0]<cx||x[1]<cy)
            {
                pos=false;
                break;
            }

            path+=string(x[0]-cx,'R');
            path+=string(x[1]-cy,'U');
            cx=x[0];
            cy=x[1];
        }

        if(pos)
        {
            cout<<"YES"<<endl;
            cout<<path<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }

    }
    return 0;
}