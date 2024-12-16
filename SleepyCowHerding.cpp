#include<bits/stdc++.h>
#include<chrono>
#define ll long long
using namespace std;
using namespace std::chrono;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<int> arr(3);
    for(auto&x:arr)
    {
        cin>>x;
    }
    sort(arr.begin(),arr.end());
    int a=arr[1]-arr[0]-1;
    int b=arr[2]-arr[1]-1;
    cout<<min(a,b)<<endl<<max(a,b)<<endl;
    return 0;
}