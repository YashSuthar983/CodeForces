#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        int slv,btts;
        cin>>slv>>btts;
        map<int,vector<int>> brand;
        
        for(int x=0;x<btts;x++)
        {
            int b,c;
            cin>>b>>c;
            brand[b].push_back(c);
        }

        vector<long long> maxprofit;
        for(auto x:brand)
        {
            vector<int> cost=x.second;
            sort(cost.rbegin(),cost.rend());
            long long sum=0;
            for(int price:cost)
            {
                sum+=price;
            }
            maxprofit.push_back(sum);
        }
        sort(maxprofit.rbegin(),maxprofit.rend());
        int maxprofitday=0;
        for( int x=0;x<min(slv,(int)maxprofit.size());x++)
        {
            maxprofitday+=maxprofit[x];
        }
        
        cout<<maxprofitday<<endl;
    }
    return 0;
}
