#include<bits/stdc++.h>
#include<chrono>
#define ll long long
using namespace std;
using namespace std::chrono;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll num;
    cin>>num;
    unsigned long long  ans=0;
    auto start = high_resolution_clock::now();
    int k=0;
    for(ll x=1;x<=num;x++)
    {
        if(x*x<=num)
        {
            k=x;
        }
        else
        {
            break;
        }
    }
    for( ll x=1;x<=k;x++)
    {
        ans+=((num/x)-(num/(x+1)))*x;
    }

    for( ll x=1;x<=num/(k+1);x++)
    {
        ans+=num/x;
    }
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    cout << duration.count() << endl;
    cout<<ans<<endl;
    return 0;
}