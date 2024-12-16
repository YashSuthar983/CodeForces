#include<bits/stdc++.h>
#include<chrono>
#define ll long long
using namespace std;
using namespace std::chrono;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a,b;
    cin>>a>>b;
    if( a==b)
    {
        cout<<"1\n"<<a<<endl;
        return 0;
    }
    cout<<"3\n"<<3*a-2*b<<" "<<b<<" "<<b<<"\n";
    return 0;
}