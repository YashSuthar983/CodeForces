#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll num;
    cin>>num;
    vector<int> arr;
    while(num!=0)
    {
        arr.push_back(num%10);
        num=num/10;

    }
    reverse(arr.begin(),arr.end());

    for(int x=0;x<arr.size();x++)
    {
        int diff=9-arr[x];
        if(x==0&&diff==0)
        {
            continue;
        }
        
        if(diff<arr[x])
        {
            arr[x]=diff;
        }
    }

    for (int x:arr)
    {
        cout<<x;
    }
}