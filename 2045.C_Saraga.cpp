#include<bits/stdc++.h>
#include<chrono>
#define ll long long
using namespace std;
using namespace std::chrono;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s,t;
    cin>>s>>t;
    int post=INT_MIN;
    int poss=INT_MAX;
    for(int x=0;x<s.size()-1;x++)
    {
        string temp;
        temp=s.substr(x,2);
        int ind = t.find(temp);
        if(ind!=string::npos)
        {
            post=max(post,ind);
            poss=min(poss,x);
        }
    }
    for(int x=0;x<poss;x++)
    {
        cout<<s[x];
    }
    for(int x=post;x<t.size();x++)
    {
        cout<<t[x];
    }
    cout<<"\n";
    return 0;
}