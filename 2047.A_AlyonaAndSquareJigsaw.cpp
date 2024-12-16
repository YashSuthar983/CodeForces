#include<bits/stdc++.h>
#include<chrono>
#define ll long long
using namespace std;
using namespace std::chrono;
vector<int> prelayer()
{
    vector<int> layerr;
    int cuu=0;
    int inc=8;
    while(cuu<=10000)
    {
        cuu+=inc;
        inc+=8;
        layerr.push_back(cuu);
    }
    return layerr;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int test;
    cin>>test;
    while(test--)
    {
        int len;
        cin>>len;
        vector<int> arr(len);
        
        for(auto &x:arr)
        {
            cin>>x;
            
        }
        vector<int> layers=prelayer();
        int ans=1;
        int prev=1;
        int sum=0;
        for( int x=1;x<len;x++)
        {
            sum+=arr[x];
            if(binary_search(layers.begin(),layers.end(),sum))
            {
                ans++;
            }
        }
        cout<<ans<<"\n";
    }
    return 0;
}