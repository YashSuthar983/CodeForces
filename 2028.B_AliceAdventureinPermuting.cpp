#include<bits/stdc++.h>
#include<chrono>
#define ll  long long
using namespace std;
using namespace std::chrono;

ll solve(ll num,ll b,ll c)
{
    int ind=1;
    
    
    if( num==1)
    {
        return 1;
    }
    if( b==0&&c==0)
    {
        return -1;
    }
    if(b==0)
    {
        return num-1;
    }
    
    while(true)
    {
        ll temp=c+(ind-1)*b;
        if(temp>=num )
        {
            ind--;
            break;
        }
        ind++;
    }
    return num-ind;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll test;
    cin>>test;
    while(test--)
    {
        ll num,b,c;
        cin>>num>>b>>c;
        //auto start = high_resolution_clock::now();
        cout<<solve(num,b,c)<<endl;
        //auto stop = high_resolution_clock::now();
        //auto duration = duration_cast<microseconds>(stop - start);
        //cout << duration.count() << endl;
    }
    
    
    
    
    return 0;
}
