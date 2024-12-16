#include<bits/stdc++.h>
using namespace std;

string solve(vector<int> arr,int len)
{
    vector<int> even;
    vector<int> odd;
    for(int x:arr)
    {
        if( x&1)
        {
            odd.push_back(x);
        }
        else{
            even.push_back(x);
        }
    }
    if((even.size()%2==0)&&(odd.size()%2==0))
    {
        return "Yes";
    }
    else
    {
        for(int x:even)
        {
            if(binary_search(odd.begin(),odd.end(),x-1)||binary_search(odd.begin(),odd.end(),x+1))
            {
                return "Yes";
            }
        }
    }

    return "No";
}

int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        int len;
        cin>>len;
        vector<int> arr(len);
        for(int x=0;x<len;x++)
        {
            cin>>arr[x];
        }
        sort(arr.begin(),arr.end());
        cout<<solve(arr,len)<<endl;
    }
    return 0;
}