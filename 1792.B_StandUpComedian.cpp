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
        int a1,a2,a3,a4,j=0;
        cin>>a1>>a2>>a3>>a4;
        if(a1==0)
        {
            cout<<"1\n";
            continue;
        }
        j=min(a1+1,abs(a2-a3)+a4);
        cout<<a1+min(a2,a3)*2+j<<"\n";
    }
    return 0;
}
