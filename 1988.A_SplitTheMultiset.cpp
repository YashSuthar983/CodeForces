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
        int n,k;
        cin>>n>>k;
        cout<<(n-1+k-2)/(k-1)<<"\n";
    }
    return 0;
}