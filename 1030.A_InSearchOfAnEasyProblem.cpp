#include<bits/stdc++.h>
#include<chrono>
#define ll long long
using namespace std;
using namespace std::chrono;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int num;cin>>num;
    while(num--)
    {
        int x;
        cin>>x;
        if(x==1)
        {
            cout<<"HARD"<<endl;
            return 0;
        }
    }
    cout<<"EASY"<<endl;
    return 0;
}