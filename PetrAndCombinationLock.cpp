#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> arr(n);
    int maxsum=0;
    for( int x=0;x<n;x++)
    {
        cin>>arr[x];
        maxsum+=arr[x];
    }
    if(maxsum%360==0)
    {
        cout<<"Yes"<<endl;
        return 0;
    }
    int l=1,r=n-2;
    int c=0;
    int count=2;
    int leftsum=arr[0];
    int rightsum=arr[n-1];
    while(l<r)
    {
        if(leftsum<rightsum)
        {
            leftsum+=arr[l];
            l++;
        }
        if(leftsum>rightsum)
        {
            rightsum+=arr[r];
            r++;
        }
        count++;
        if( leftsum==rightsum&&count==n)
        {
            cout<<"Yes"<<endl;
            return 0;
            
        }
    }
    cout<<"No";
    return 0;
}