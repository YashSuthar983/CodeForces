#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin>> test;
    while( test--)
    {
        int n,need;
        cin>>n>>need;
        int even=0;
        int odd=0;
        for( int x=0;x<n;x++)
        {
            int temp;
            cin >> temp;
            if( temp%2==0)
            {
                even++;
            }
            else
            {
                odd++;
            }
        }
        bool isPossible=false;
        if(need==0)
        {
            isPossible=false;
        }
        
        for( int x=1;x<need;x+=2)
        {
            if( x> need)
            {
                break;
            }
            if((need-x)<=even)
            {
                isPossible=true;
            }
        }

        if( isPossible)
        {
            cout<<"Yes";
        }
        else
        {
            cout<<"No";
        }

    }
    return 0;
}