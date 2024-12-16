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
        int len, h,m;
        cin>>len>>h>>m;
        int hmin=(h*60)+m;
        vector<int> arr(len);
        int ans=24*60;
        for(auto&x:arr)
        {
            int a,b;
            cin>>a>>b;
            int ti=a*60 + b -hmin;
            if(ti<0)
            {
                ti+=24*60;
               
            }
             ans=min(ti,ans);
        }
        

        cout<<ans/60<<" "<<ans%60<<"\n";

    }
    return 0;
}