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
        int len ;
        cin>>len;
        vector<int> arr(len);
        for(auto&x:arr)
        {
            cin>>x;
        }
        int ans=0;
        for(int x=0;x<arr.size()-1;x++)
        {
            if(arr[x]%2!=0&&arr[x+1]%2!=0)
            {
                int temp=arr[x+1];
                arr.erase(arr.begin()+x+1,arr.begin()+x+2);
                arr[x]=temp;
                x--;
                ans++;
                continue;
            }
            else if(arr[x]%2==0&&arr[x+1]%2==0)
            {
                int temp=arr[x+1];
                arr.erase(arr.begin()+x+1,arr.begin()+x+2);
                arr[x]=temp;
                x--;
                ans++;
                continue;
            }
        }
        cout<<ans<<"\n";
    }
    return 0;
}