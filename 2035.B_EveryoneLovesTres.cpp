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
        if(num==1||num==3)
        {
            cout<<"-1\n";
        }
        else if(num%2==0)
        {
            for(int x=0;x<num-2;x++)
            {
                cout<<"3";
            }
            cout<<"66\n";
        }
        else
        {
            for(int x=0;x<num-5;x++)
            {
                cout<<"3";
            }
            cout<<"36366\n";
        }
    }
    return 0;
}