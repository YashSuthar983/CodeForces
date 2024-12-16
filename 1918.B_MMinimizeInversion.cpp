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
    while(test--)
    {
        int len;
        cin>>len;
        vector<vector<int>> arr(len,vector<int>(2));
        for(auto&x:arr)
        {
            cin>>x[0];
        }
        for(auto&x:arr)
        {
            cin>>x[1];
        }
        sort(arr.begin(),arr.end());

        for(vector<int> x:arr)
        {
            cout<<x[0]<<" ";
        }
        cout<<"\n";
        for(vector<int> x:arr)
        {
            cout<<x[1]<<" ";
        }
        cout<<"\n";

    }
    return 0;
}