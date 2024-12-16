#include<bits/stdc++.h>
#include<chrono>
#define ll long long
using namespace std;
using namespace std::chrono;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll test;
    cin>>test;
    while(test--)
    {
        ll len,k;
        cin>>len>>k;
        vector<ll> arr(len);
        for(auto&x:arr)
        {
            cin>>x;
        }
        ll sum=0;
        ll left=0;
        ll ops=len+1;
        for(int x=0;x<len;x++)
        {
            sum+=arr[x];
            while(sum>k&&left<=x)
            {
                sum-=arr[left];
                left++;
            }
            if( sum==k)
            {
                ops=min(ops,len-(x-left+1));
            }
        }

        if( ops==len+1)
        {
            cout<<-1<<endl;
        }
        else
        {
            cout<<ops<<endl;
        }



        //------------just too complex

        // int sum=0;
        // int i=0;

        // for(int y=0;y<len;y++)
        // {
        //     sum+=arr[y];
        // }
        // if(sum<k)
        // {
        //     cout<<-1<<endl;
        //     continue;
        // }
        // if( sum==k)
        // {
        //     cout<<i<<endl;
        //     continue;
        // }

        // int temp=sum;
        
        // while(sum!=k&&(len-i)>k)
        // {
            
        //     bool bre=false;
        //     // for(int y=0;y<=len-i-1;y++)
        //     // {
        //     //     sum+=arr[y];
        //     // }

        //     for( int x=0;x<i;x++)
        //     {
                
        //         temp-=arr[x];
        //         temp+=arr[len-i+x];
        //         if(temp==k)
        //         {
        //             bre=true;
        //             break;
        //         }
        //     }
        //     if(bre)
        //     {
        //         break;
        //     }
            
        //     i++;
        //     temp=sum-arr[len-i];
        //     sum-=arr[len-i];
            
        // }
        // cout<<i<<endl;
    }



    return 0;
}