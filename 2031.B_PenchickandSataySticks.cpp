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
        for(auto&x:arr)
        {
            cin>>x;
        }
        int sorted=true;
        for( int x=0;x<len-1;x++)
        {
            if((arr[x]==x+2&&arr[x+1]==x+1)||arr[x]<arr[x+1])
            {
                sorted=true;
            }
            else
            {
                sorted=false;
                break;
            }
        }
        if(sorted)
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