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
    while(test--)
    {
        int num;
        cin>>num;
        while (num>1)
        {
            cout<<"0";
            num--;
        }
        cout<<"1\n";
        
    }
    return 0;
}