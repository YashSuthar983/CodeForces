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
    while( test--)
    {
        int hk;
        cin>>hk;
        vector<int> kbd(3);
        for(auto&x:kbd)
        {
            cin>>x;
        }
        int count=0;
        int i=0;
        while(i<3)
        {
            if(kbd[hk-1]!=0)
            {
                count++;
                hk=kbd[hk-1];
            }
            i++;
        }
        if( count==2)
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