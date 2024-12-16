#include<bits/stdc++.h>
#include<chrono>
#define ll long long
using namespace std;
using namespace std::chrono;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    for(int x=0;x<5;x++)
    {
        for(int y=0;y<5;y++)
        {
            int temp;
            cin>>temp;
            if(temp==1)
            {
                cout<<abs(x-2)+abs(y-2)<<"\n";
                return 0;
            }
            
        }
    }
    return 0;
}