#include<bits/stdc++.h>
#include<chrono>
#define ll long long
using namespace std;
using namespace std::chrono;
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
        
        int avg=sum/len;
        int left=0;
        int bre=0;
        for(int x=0;x<len;x++)
        {
            if(arr[x]>avg)
            {
                left+=(arr[x]-avg);
            }
            else if(arr[x]<avg&&left>=avg-arr[x])
            {
                int diff=avg-arr[x];
                if(diff>left)
                {
                    break;
                }
                else
                {
                    arr[x]=avg;
                    left-=diff;
                }
            }
        }

        if(left==0)
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