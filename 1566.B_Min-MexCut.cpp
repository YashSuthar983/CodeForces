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
    cin>> test;
    while(test--)
    {
        string s;
        cin>>s;
        int count=0;
        char prev=s[0];
        if(prev=='0')
        {
            count++;
        }
        for(int x=1;x<s.size();x++)
        {
            
            if(prev!=s[x])
            {
                if(s[x]=='0')
                {
                    count++;
                }
            }
            prev=s[x];
            
            
        }
        if(count==0&&prev=='1')
        {
            cout<<'0'<<endl;
            continue;
        }
        if( count==0&&prev=='0')
        {
            cout<<'1'<<endl;
            continue;
        }
        cout<<(count>2?2:count)<<endl;

        
        

    }
    return 0;
}