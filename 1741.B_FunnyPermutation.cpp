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
        int num;
        cin>>num;
        if( num==2)
        {
            cout<<2<<" "<<1<<endl;
            continue;
        }
        if( num==3)
        {
            cout<<-1<<endl;
            continue;
        }
        for( int x=3;x<=num;x++)
        {
            cout<<x<<" ";
        }
        cout<<2<<" "<<"1\n";

    }
    return 0;
}