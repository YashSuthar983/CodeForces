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
        vector<int> even;
        vector<int> odd;
        for(int x=0;x<len;x++)
        {
            int t;
            cin>>t;
            if(t%2==0)even.push_back(t);
            else{odd.push_back(t);}
        }
        if(odd.size()%2==0)
        {
            cout<<"YES\n";
        }
        else
        {
            cout<<"NO\n";
        }
    }
    return 0;
}