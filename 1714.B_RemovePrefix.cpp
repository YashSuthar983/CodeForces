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
        cin>>len ;
        vector<int> arr(len);
        unordered_map<int,int> feq;
        for( auto&x:arr)
        {
            cin>>x;
        }
        int i=0;
        for(int x=len-1;x>=0;x--)
        {
            if(feq[arr[x]]==1)
            {
                i=x+1;
                
                break;
            }
            feq[arr[x]]++;
        }
        cout<<i<<"\n";
        
    }
    return 0;
}