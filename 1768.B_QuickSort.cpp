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
        int len,k;
        cin>>len>>k;
        vector<int> arr(len);
        int prev=1;
        for(auto&x:arr)
        {
            cin>>x;
            if(x==prev)
            {
                prev++;
            }
        }
        cout<<(len-prev+k)/k<<"\n";

        
    }
    return 0;
}