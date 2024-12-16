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
    for( auto &x:arr)
    {
        cin>>x;
    }
    vector<int> ans(len,0);
    for(int x=1;x<=len;x++)
    {
        ans[arr[x-1]-1]=x;
    }
    for( int x:ans)
    {
        cout<<x<<" ";
    }
    cout<<"\n";
    return 0;
}