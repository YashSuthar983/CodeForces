#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n,k;
    cin>>n>>k;
    vector<long long> arr;
    long long oddlim=(n+1)/2;
    if(k<=oddlim)
    {
        cout<<k*2 -1;
    }
    else
    {
        cout<<(k-oddlim)*2;
    }
    
    return 0;

}