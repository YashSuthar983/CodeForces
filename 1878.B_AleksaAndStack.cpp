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
        int len;
        cin>>len;
        int prev=1;
        for(int x=0;x<len;x++)
        {
            cout<<prev<<" ";
            prev+=2;
        }
        cout<<"\n";
    }
    return 0;
}