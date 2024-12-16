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
        int n;
        cin>>n;
        int i=9;
        string ans;
        while(n>0)
        {
            if(n>i)
            {
                ans.push_back('0'+i);
            }
            else
            {
                ans.push_back('0'+n);
            }
            
            n-=i;
            i--;
        }
        reverse(ans.begin(),ans.end());
        cout<<ans<<"\n";
    }
    return 0;
}