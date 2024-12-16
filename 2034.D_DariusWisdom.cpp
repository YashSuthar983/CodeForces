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
    cin>> test;
    while(test--)
    {
        int len;
        cin>>len;
        vector<int> arr(len);
        for(auto&x:arr)
        {
            cin>>x;
        }

        reverse(arr.begin(),arr.end());
        int s=0;
        vector<pair<int,int>> res;

        while(s!=arr.end()-arr.begin())
        {
            int ind=-1;
            for(int x=s;x<len;x++)
            {
                if(arr[s]<arr[x]&&(arr[x]-arr[s]==1))
                {
                    ind=x;
                }
            }
            
            if(ind==-1)
            {
                s++;
                continue;
            }
            arr[s]++;
            arr[ind]--;
            res.push_back({s,ind});
            
        }
        cout<<res.size()<<"\n";
        for( auto&x:res)
        {
            cout<<len-x.first<<" "<<len-x.second<<"\n";
        }
    }
    return 0;
}