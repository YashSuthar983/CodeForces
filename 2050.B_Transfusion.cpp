#include<bits/stdc++.h>
#include<chrono>
#define ll long long
using namespace std;
using namespace std::chrono;
bool check(vector<int> arr)
{
    for(int x=0;x<arr.size()-1;x++)
    {
        if(arr[x]>arr[x+1])
        {
            return false;
        }
    }
    return true;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int test;
    cin>>test;
    while(test--)
    {
        int len;
        cin>>len;
        vector<int> arr(len);
        ll sum=0;
        for(auto&x:arr)
        {
            cin>>x;
            sum+=x;
        }
        if(sum%len!=0)
        {
            cout<<"NO\n";
            continue;
        }
        int avg=sum/len;
        int bre=0;
        for(int x=1;x<len-1;x++)
        {
            if(arr[x-1]<avg)
            {
                int dif=avg-arr[x-1];
                arr[x-1]+=dif;
                arr[x+1]-=dif;
            }
            else
            {
                int dif=arr[x-1]-avg;
                arr[x-1]-=dif;
                arr[x+1]+=dif;
            }
            // if(arr[x-1]<0||arr[x+1]<0)
            // {
            //     bre=1;
            //     break;
            // }
        }
        
        if(check(arr))
        {
            cout<<"YES\n";
        }
        else
        {
            cout<<"NO\n";
        }
    }
    return 0;
}