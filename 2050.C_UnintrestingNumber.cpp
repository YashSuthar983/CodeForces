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
        ll sum=0;
        ll s2=0;
        ll s3=0;
        for(char x:s)
        {
            if(x-'0'==2)
            {
                s2++;
            }
            if(x-'0'==3)
            {
                s3++;
            }
            sum+=x-'0';
        }
        if(sum%9==0)
        {
            cout<<"YES\n";
            continue;
        }
        int rem=(9-(sum%9))%9;
        int bre=0;
        for( int x=0;x<=s2;x++)
        {
            for( int y=0;y<=s3;y++)
            {
                if( (sum+2*x+6*y)%9==0)
                {
                    bre=1;
                    break;
                }
            }
            if(bre)break;
        }
        
        if(bre)
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