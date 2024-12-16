#include<bits/stdc++.h>
using namespace std;
int main()
{
    int len,terms;
    cin>>len>>terms;
    vector<int> arr(len);
    for( int x=0;x<len;x++)
    {
        cin>>arr[x];
    }
    int sum=0,index=0;
    for( int x=0;x<terms;x++)
    {
        sum+=arr[x];
    }
    int minsum=sum;
    for(int x=1;x<=len-terms;x++)
    {
        sum=sum-arr[x-1]+arr[x+terms-1];
        if( sum< minsum)
        {
            minsum=sum;
            index=x;
        }
    }

    // for( int x=0;x<len-(terms-1);x++)
    // {
    //     int temp=0;
    //     for( int y=x;y<(terms)+x;y++)
    //     {
    //         temp+=arr[y];
    //     }
    //     if( temp<sum)
    //     {
    //         sum=temp;
    //         index=x;
    //     }
        
    // }
    cout<<index+1<<endl;
    return 0;
}