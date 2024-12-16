#include<bits/stdc++.h>
#include<chrono>
#define ll long long
using namespace std;
using namespace std::chrono;

void solve( string& s)
{
    bool gotit=false;
    for (int i = 0; i <s.size( )-1; ++i) {
        if (s[i]==s[i + 1]) {
            cout <<s.substr(i, 2) << endl;
            gotit =true;
            return;
        }
    }
    
    if(s.size()<3)
    {
        cout<<-1<<endl;
        return;
    }
    
    for (int i = 0; i <s.size( )-2; i++) {
        if (s[i]!=s[i + 1]&&s[i+1]!=s[i+2]&&s[i]!=s[i+2]) 
        {
            cout <<s.substr(i,3) << endl;
            gotit =true;
            return;
        }
    }
    if(!gotit)
    {
        cout<<-1<<endl;
        return ;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int test;
    cin>>test;
    while(test--)
    {
        string s;
        cin>>s;
        
        solve(s);

    }
    return 0;
}

