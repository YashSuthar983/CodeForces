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
    while( test--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        int n=abs(a-b)*2;
        if( a>n||b>n||c>n)
        {
            cout<<-1<<endl;
            continue;
        }
        int d=(n/2)+c;
        while(d>n)
        {
            d-=n;
        }
        cout<<d<<endl;
    }
    return 0;
}