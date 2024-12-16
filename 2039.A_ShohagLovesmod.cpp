#include<bits/stdc++.h>
#include<chrono>
#define ll long long
using namespace std;
using namespace std::chrono;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll test;
    cin>>test;
    while(test--)
    {
        int num;
        cin>>num;
        int div=0;
        for( int x=2;x<=100;x++)
        {
            for( int y=2;y<=100;y++)
            {
                if(x%y==div)
                {
                    cout<<x<<" ";
                    div++;
                    num--;
                    break;
                }
            }
            
            if(num==0)
            {
                break;
            }
            
        }
        
        cout<<endl;
    }
    return 0;
}