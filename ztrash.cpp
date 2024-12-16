#include<bits/stdc++.h>
#include<chrono>
#define ll long long
using namespace std;
using namespace std::chrono;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n=8;
    int f=0;
    int s=1;
    for(int x=2;x<=n-1;x++)
    {
        int temp=s;
        s=s+f;
        f=temp;
    }
    cout<<s<<"\n";
    return 0;
}