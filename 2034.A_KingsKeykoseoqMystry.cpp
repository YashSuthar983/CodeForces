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
        ll a,b;
        cin>>a>>b;
        // ll num=min(a,b);
        // while((num%a)!=(num%b))
        // {
        //     num++;
        // }
        // cout<<num<<"\n";
        cout<<(a*b)/gcd(a,b)<<"\n";
    }
    return 0;
}