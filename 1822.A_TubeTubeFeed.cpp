#include<bits/stdc++.h>
#include<chrono>
#define ll long long
using namespace std;
using namespace std::chrono;
int solve(int len,int t)
{
    vector<int> vt(len),et(len);
    for(auto&x:vt)
    {
        cin>>x;
    }
    for(auto&x:et)
    {
        cin>>x;
    }
    int emax=-1;
    int ans=-1;
    int i=0;
    while(t)
    {
        if(et[i]>=emax&& t >=vt[i])
        {
            emax=et[i];
            ans=i+1;
        }
        i++;
        t--;
        if(i>=len)
        {
            break;
        }
    }
    return ans;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int test;
    cin>>test;
    while(test--)
    {
        int len,t;
        cin>>len>>t;
        
        cout<<solve(len,t)<<"\n";
    }
    return 0;
}