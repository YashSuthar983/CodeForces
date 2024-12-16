#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,a,b;
    cin>>n>>m>>a>>b;

    if(n<m)
    {
        cout<<min(n*a,b);
        return 0;
        
    }
    int rideSingle=n*a;
    int rideMulti= n%m!=0?(((n/m)*b)+ (min((n%m)*a,b))):((n/m)*b);
    
    cout<<min(rideSingle,rideMulti);
    return 0;
}