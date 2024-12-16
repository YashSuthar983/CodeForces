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
        int a,b,c;
        cin>>a>>b>>c;
        cout<<max(a,abs(a-b-c)+1)<<"\n";
    }
    return 0;
}