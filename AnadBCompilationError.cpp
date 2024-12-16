#include<bits/stdc++.h>
using namespace std;
int main()
{
    int len,sum=0;
    cin>>len;
    vector<vector<int>> arr;
    for( int x=0;x<3;x++)
    {
        vector<int> temp;
        for(int y=0;y<len-x;y++)
        {
            int t;
            cin>>t;
            temp.push_back(t);
        }
        arr.push_back(temp);
        if( x!=0)
        {
            cout<<accumulate(arr[x-1].begin(),arr[x-1].end(),0)-accumulate(arr[x].begin(),arr[x].end(),0)<<endl;
        }
    }
    

    return 0;
}