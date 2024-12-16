#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    
    if (k > n) {
        return 0;
    }
    vector<int> arr(n);
    for(int x=0;x< n;x++)
    {
        cin>>arr[x];
    }
    sort(arr.begin(),arr.end());
    vector<int> temp;
    for(int x=0;x<k;x++)
    {
        temp.push_back(arr[x]);
    }

    for( int x:temp)
    {
        cout<<x;
    }
    if( k==0)
    {
        if(arr[0]>1)
        {
            cout<<arr[0]-1;
        }
        else
        {
            cout<<-1;
        }
    }
    else if(k<n&&arr[k]==temp[k-1])
    {
        cout<<-1;
    }
    else if( k==n)
    {
        cout<<arr[n-1];
    }
    else
    {
        cout<<temp[k-1];
    }
    return 0;
}