#include<bits/stdc++.h>
using namespace std;
int main()
{
    int len;
    cin>>len;
    vector<vector<int>> arr(len,vector<int>(2));
    for(int x=0;x<len;x++)
    {
        cin >> arr[x][0] >> arr[x][1];
    }
    sort(arr.begin(),arr.end());
    for(int x=1;x<arr.size();x++)
    {
        if(arr[x-1][0]<arr[x][0]&&arr[x-1][1]>arr[x][1])
        {
            cout<<"Happy Alex"<<endl;
            return 0;
        }
    }

    cout<<"Poor Alex"<<endl;
    return 0;
}
