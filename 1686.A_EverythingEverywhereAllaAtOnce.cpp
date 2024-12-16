#include<bits/stdc++.h>
#include<chrono>
#define ll long long
using namespace std;
using namespace std::chrono;
string solve()
{
    int len;
    cin>>len;
    vector<int> arr(len);
    ll sum=0;
    for(auto&x:arr)
    {
        cin>>x;
        sum+=x;
    }
    for(int x:arr)
    {
        float avg=((sum-x)*1.0)/((len-1)*1.0);
        if(avg==x)
        {
            return "YES\n";
        }
    }
    return "NO\n";
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int test;
    cin>>test;
    while(test--)
    {
        cout<<solve();

    }
    return 0;
}