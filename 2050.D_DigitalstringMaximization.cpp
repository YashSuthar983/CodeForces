#include<bits/stdc++.h>
#include<chrono>
#define ll unsigned long long
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

        for (int i = 1; i < s.size(); ++i) 
        {
            int pos=i;
            while(pos>0&&s[pos]>'0'&&s[pos]-1>s[pos-1])
            {
                char prv=s[pos-1];
                s[pos-1]=s[pos]-1;
                s[pos]=prv;
                pos--;
            }
        }
        
        
        cout<<s<<"\n";
    }
    return 0;
}