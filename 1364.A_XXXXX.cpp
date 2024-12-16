#include<bits/stdc++.h>
#define ll long long
using namespace std;
// void solve(vector<ll> arr,ll len,ll num)
// {
//     ll count=-1;
//     for( ll x=0;x<len;x++)
//     {
//         for( ll y=x;y<len;y++)
//         {
//             ll sum=0;
//             for( ll k=x;k<=y;k++)
//             {
//                 //cout<<arr[k]<<" ";
//                 sum+=arr[k];   
//             }
            
//             //cout<<endl<<"SUM IS   "<<sum<<endl;
//             if( sum%num!=0)
//             {
//                 //cout<<" NOOT "<<y-x+1<<endl;
//                 if(count>(y-x+1))
//                 {
//                     cout<<"COUNT IS  "  <<count<<endl;
//                     return;
//                 }
//                 count=max(count,y-x+1);
//             }
//         }
//     }
//     cout<<"COUNT IS  "  <<count<<endl;

// }


void solve(vector<ll> arr,ll len,ll num)
{

    ll count=-1;
    int isum=accumulate(arr.begin(), arr.end( ),0);

    if( isum%num!=0)
    {
        cout<<len<<endl;
        return;
    }

    for( ll x=0;x<len;x++)
    {
        if( ((isum-arr[x])%num)!=0)
        {
            count=max(count,len-1-x);
        }
    }
    for( ll x=len-1;x>=0;x--)
    {
        if( ((isum-arr[x])%num)!=0)
        {
            count=max(count,x);
        }
    }

    cout<<count<<endl;

}


int main()
{
    int test;
    cin>>test;
    while( test--)
    {
        ll len,num;
        cin>>len>>num;

        vector<ll> arr(len);
        for( ll x=0;x<len;x++)
        {
            cin>>arr[x];
        }
        solve(arr,len,num);
    }
    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t;
//     scanf("%d",&t);
//     while (t--)
//     {
//         int n,x,sum=0,l=-1,r;
//         scanf("%d%d",&n,&x);
//         for (int i=0;i<n;i++)
//         {
//             int a;
//             scanf("%d",&a);
//             if (a%x)
//             {
//                 if (l==-1)
//                 l=i;
//                 r=i;
//             }
//             sum+=a;
//         }
//         if (sum%x)
//         printf("%d\n",n);
//         else if (l==-1)
//         printf("-1\n");
//         else
//         printf("%d\n",n-min(l+1,n-r));
//     }
// }