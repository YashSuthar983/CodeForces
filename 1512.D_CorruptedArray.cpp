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
    cin>>test;;
    while(test--)
    {
        int len;
        cin>>len;
        ll sum=0;
        vector<ll> arr(len+2);
        for( int x=0;x<len+2;x++)
        {
            cin>>arr[x];
            sum+=arr[x];
        }
        sort(arr.begin(),arr.end());

        
        //ll sum=accumulate(arr.begin(),arr.end(),0ll);
        int right=1;
        int ind1=-1;
        int ind2=-1;
        while(right<=2)
        {
            ll tempsum=sum-arr[len+2-right];
            int bre=0;
            // auto pos=find(arr.begin(),arr.end(),tempsum);
            // if(pos!=arr.end())
            // {
            //     ind1=pos-arr.begin();
            //     ind2=len+2-right;
            //     break;
            // }


            for(int x=0;x<len+2;x++)
            {
                if(x==len+2-right)
                {
                    continue;
                }
                if(tempsum-arr[x]==arr[len+2-right])
                {
                    bre=1;
                    ind1=x;
                    ind2=len+2-right;
                    break;
                }
            }
            if( bre==1)
            {
                
                break;;
            }
            right++;
        }
        if( ind1==-1||ind2==-1)
        {
            cout<<-1<<endl;
            continue;
        }
        for( int x=0;x<len+2;x++)
        {
            if(x==ind1||x==ind2)
            {
                continue;
            }
            cout<<arr[x]<<" ";
        }
        cout<<endl;






        // int ind=-1;
        // for( int x=0;x<len+1;x++)
        // {
        //     if( sum-arr[x]==arr[len+1])
        //     {
        //         ind=x;
        //         break;;
        //     }
            
        // }

        // if( ind==-1)
        // {
        //     cout<<-1<<endl;
        //     continue;
        // }

        // for( int x=0;x<len+1;x++)
        // {
        //     if(x==ind)
        //     {
        //         continue;
        //     }
        //     cout<<arr[x]<<" ";
        // }
        // cout<<endl;

    }
    return 0;
}