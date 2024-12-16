#include<bits/stdc++.h>
#include<chrono>
#define ll long long
using namespace std;
using namespace std::chrono;
void solve()
{
    ll len,del;
    cin>>len>>del;
    string s;
    cin>>s;
    vector<char> arr(del);
    for( int x=0;x<del;x++)
    {
        cin>>arr[x];
    }

    ll lc=0;
    ll ans=0;
    for(char x:s)
    {
        if(find(arr.begin(),arr.end(),x)!=arr.end())
        {
            lc++;
            //cout<<x<<"//////"<<endl;
        }
        else
        {
            ans+=(double)lc*(double)(lc+1)/(double)2;
            lc=0;

        }
        //cout<<lc<<"----"<<endl;
    }
    ans+=(double)lc*(double)(lc+1)/(double)2;
    cout<<ans<<endl;

    
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    // auto start = high_resolution_clock::now();
    // auto stop = high_resolution_clock::now();
    // auto duration = duration_cast<microseconds>(stop - start);
    // cout << duration.count() << endl;

    return 0;
}