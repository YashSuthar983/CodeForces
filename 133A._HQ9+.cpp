#include<bits/stdc++.h>
#include<chrono>
#define ll long long
using namespace std;
using namespace std::chrono;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin>>s;
    
    for( char x:s)
    {
        if(x=='H'||x=='Q'||x=='9')
        {
            cout<<"YES\n";
            return 0;
        }
    }
    cout<<"NO\n";
    return 0;
}