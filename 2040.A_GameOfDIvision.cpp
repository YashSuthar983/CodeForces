#include<bits/stdc++.h>
#include<chrono>
#define ll long long
using namespace std;
using namespace std::chrono;

void solve()
{
    int len,k;
    cin>>len>>k;
    vector<int> arr(len);
    for(auto&x:arr)
    {
        cin>>x;
    }
    
    for(int x=0;x<len;x++)
    {
        int count=0;
        int ind=-1;
        for(int y=0;y<len;y++)
        {
            if((abs(arr[x]-arr[y]))%k!=0&&x!=y)
            {
                count++;
                
            }
            if(count==(len-1))
            {
                cout<<"YES\n"<<x+1<<"\n";
                return;
            }
        }
    }
    cout<<"NO\n"
    
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int test;
    cin>>test;
    while(test--)
    {
        solve();
         
    }
    return 0;
}