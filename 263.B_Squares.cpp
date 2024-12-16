#include<bits/stdc++.h>
#include<chrono>
#define ll long long
using namespace std;
using namespace std::chrono;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,k;
    cin>>n>>k;
    vector<int> arr(n);
    for(auto&x:arr)
    {
        cin>>x;
    }
    sort(arr.begin(),arr.end());
    if(k>n)
    {
        cout<<"-1\n";
        return 0;
    }
    cout<<arr[n-k]<<" "<<"0\n";
    return 0;
}