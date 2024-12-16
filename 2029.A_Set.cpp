#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int test;
    cin>>test;
    while( test--)
    {
        ll l,r,k;
        cin>>l>>r>>k;
        ll i=l;
        int opp=0;
        //check mid one
        ll mid=r-(r-l)/2;
        ll val=0;
        ll left=l,right=r;

        while(left<right)
        {
            if(k==1)
            {
                
                break;
            }
            if((mid*k)>r)
            {
                right=mid-1;
            }
            else if (mid*k==r)
            {
                break;
            }
            else
            {
                left=mid+1;
            }
            
            mid=right-(right-left)/2;
        }
        val=mid-l+1;
        if(k==1)
        {
            val=r-l+1;
            
        }
        
        if(mid*k>r&&(mid==l))
        {
            val=0;
        }
        else if((mid*k)>r&&mid!=l)
        {
            mid--;
            val=mid-l+1;
        }
        
        cout<<val<<endl;
        // if(mid*k>r)
        // {
        //     val=mid;
        //     while(true)
        //     {
        //         int temp=val*k;
        //         if((temp)<=r||(val<=(l-1)))
        //         {
        //             break;
        //         }
        //         val--;
        //     }
            
        // }
        // else
        // {
        //     val=mid;
        //     while(true)
        //     {
        //         int temp=val*k;
        //         if((temp)>=r)
        //         {
                    
        //             break;
        //         }
        //         val++;
        //     }
            
        // }
        
        // cout<<val-l+1<<endl;
        // while(true)
        // {
        //     int temp=l*k;
        //     if((temp)>r)
        //     {
                
        //         break;
        //     }
        //     if(temp==r)
        //     {
        //         opp++;
        //     }
        //     else
        //     {
        //         opp++;
        //     }
        //     l++;
        // }
        //cout<<opp<<endl;
    }
    return 0;
}