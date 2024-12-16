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
    while( test--)
    {
        int len;
        cin>>len;
        vector<int> arr(len);
        unordered_map<int,int> feq;
        for( auto &x:arr)
        {
            cin>>x;
            feq[x]++;
        }
        int feq1=0;
        int feqmul=0;
        for(auto x:feq)
        {
            if(x.second==1)
            {
                feq1++;
            }
            else
            {
                feqmul++;
            }
        }
        int ans=0;
        if( feq1%2!=0)
        {
            ans+=2*((feq1/2)+1);
        }
        else
        {
            ans+=2*(feq1/2);
        }
        ans+=feqmul;
        cout<<ans<<"\n";
    }
    return 0;
}