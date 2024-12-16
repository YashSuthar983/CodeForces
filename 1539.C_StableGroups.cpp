#include<bits/stdc++.h>
#include<chrono>
#define ll long long
using namespace std;
using namespace std::chrono;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,k,x;
    cin>>n>>k>>x;
    vector<ll> arr(n);
    for( ll i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());
    vector<ll> diff;
    for( ll i=1;i<n;i++)
    {
        if (arr[i] - arr[i - 1] > x) {
            diff.push_back(arr[i] - arr[i - 1]);
        }
    }
    sort(diff.rbegin(),diff.rend());
    if(k==0)
    {
        cout<<diff.size()+1<<endl;
        return 0;
    }
    for( ll i=diff.size()-1;i>=0;i--)
    {
        
        if( ((diff[i]-1)/x)<=k)
        {
            k-=(diff[i]-1)/x;
            diff.pop_back();
        }
        else {
                break;
            }
    }
    cout<<diff.size()+1<<endl;
    return 0;
}