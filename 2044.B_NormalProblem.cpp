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
        string s;
        cin>>s;
        for(int x=s.size()-1;x>=0;x--)
        {
            char t;
            if(s[x]=='p')
            {
                t='q';
            }
            else if(s[x]=='q')
            {
                t='p';
            }
            else
            {
                t='w';
            }
            cout<<t;
        }
        cout<<"\n";
    }
    return 0;
}