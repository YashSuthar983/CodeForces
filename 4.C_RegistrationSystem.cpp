#include<bits/stdc++.h>
#include<chrono>
#define ll long long
using namespace std;
using namespace std::chrono;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll test;
    cin>>test;
    unordered_map<string,int> feq;
    while ((test--))
    {
        string s;
        cin>>s;
        string temp(s);
        if(feq[s]>=1)
        {
            cout<<temp<<feq[s]<<endl;

        }
        else
        {
            cout<<"OK"<<endl;
        }
        feq[s]++;
    }
    
    return 0;
}