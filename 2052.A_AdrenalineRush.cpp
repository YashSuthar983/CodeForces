#include<bits/stdc++.h>
#include<chrono>
#define ll long long
using namespace std;
using namespace std::chrono;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int len;
    cin>>len;
    vector<int> arr(len);
    for(auto&x:arr)
    {
        cin>>x;
    }
    vector<pair<int,int>> ans;
    vector<int> sq(len);
    iota(sq.begin(),sq.end(),1);
    for(int x=0;x<len;x++)
    {
        for(int y=len-1;y>x;y--)
        {
            if(sq[y]==arr[x])
            {
                swap(sq[y - 1], sq[y]);
                ans.push_back({sq[y], sq[y- 1]});
            }
        }
    }
    cout<<ans.size()<<"\n";
    for(auto&x:ans)
    {
        cout<<x.first<<" "<<x.second<<"\n";
    }
    cout<<"\n";
    return 0;
}