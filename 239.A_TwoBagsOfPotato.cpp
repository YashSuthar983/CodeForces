#include<bits/stdc++.h>
#include<chrono>
#define ll long long
using namespace std;
using namespace std::chrono;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int x,k,sum;
    cin>>x>>k>>sum;
    int tempsum=0;
    int ind=1;
    if(x==sum)
    {
        cout<<-1<<endl;
        return 0;
    }
    
    tempsum=((x/k)+1)*k-x;
    bool gotsom=false;
    for(int i=tempsum;;i+=k)
    {
        if((x+i)>sum)
        {
            break;
        }
        cout<<i<<endl;
        gotsom=true;
    }
    if(!gotsom)
    {
        cout<<-1<<endl;
    }
    return 0;
}