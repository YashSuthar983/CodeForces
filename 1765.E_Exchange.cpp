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
        int cost,a,b;
        cin>>cost>>a>>b;
        if(a<=b)
        {
            cout<<fixed<< setprecision(0)<<ceil((float)cost/(float)a)<<endl;
        }
        else
        {
            cout<<1<<endl;
        }
    }

    return 0;
}