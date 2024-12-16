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

        if(abs(b-c)%2==0)
        {
            cout<<"1 ";
        }
        else
        {
            cout<<"0 ";
        }
        if(abs(a-c)%2==0)
        {
            cout<<"1 ";
        }
        else
        {
            cout<<"0 ";
        }
        if(abs(b-a)%2==0)
        {
            cout<<"1 ";
        }
        else
        {
            cout<<"0 ";
        }
        cout<<"\n";
    }
    return 0;
}