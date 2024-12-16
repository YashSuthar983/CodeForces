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
        int n,a1,a2;
        cin>>n>>a1>>a2;
        ll d=(a2-a1)/n;
        vector<ll> arr;
        
        ll prev=a2;
        bool bac=true;
        while(find(arr.begin(),arr.end(),a1)==arr.end()||find(arr.begin(),arr.end(),a2)==arr.end())
        {
            arr.clear();
            arr.push_back(a2);
            for( int x=1;x<n;x++)
            {
                int diff;
                if( bac)
                {
                    diff=prev-d;
                    
                }
                else
                {
                    diff=*max_element(arr.begin(),arr.end())+d;

                }
                
                if(diff>=1)
                {
                    arr.push_back(diff);
                }
                else
                {
                    bac=false;
                    x--;
                }
                prev=diff;
            }
            d++;
            prev=a2;
            bac=true;
            
            
        }

        for( int x: arr)
        {
            cout<<x<<" ";
        }
        cout<<endl;
        
    }
    return 0;
}