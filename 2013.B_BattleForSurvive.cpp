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
    while( test--)
    {
        int len;
        cin>>len;
        vector<ll> arr(len);
        ll sum=0;
        for( auto &x:arr)
        {
            cin>>x;
            sum+=x;
        }
        
        //cout<<arr[len-1]-(arr[len-2]-(sum-arr[len-1]-arr[len-2]))<<endl;



        cout<<sum-2*arr[len-2]<<endl;





        // ll last=arr[len-1];
        // int seclast=arr[len-2];
        // int i=len-2;
        // while(i>0)
        // {
        //     int max=*max_element(arr.begin(),arr.begin()+i);
        //     int pos=find(arr.begin(),arr.end(),max)-arr.begin();
        //     arr.erase(arr.begin()+pos);
        //     seclast=seclast-max;
        //     i--;
        // }
        // cout<<last-seclast<<endl;

    }
    return 0;
}