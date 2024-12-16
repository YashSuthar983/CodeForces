#include<bits/stdc++.h>
#include<chrono>
#define ll long long
using namespace std;
using namespace std::chrono;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int len;
    cin>>len;
    vector<int> arr(len);
    for( auto&x:arr)
    {
        cin>>x;
    }
    vector<int> result;
    int prefix=1;
    for(int x=0;x<len;x++)
    {
        result.push_back(prefix);
        prefix=prefix*arr[x];
    }
    prefix=1;
    for(int x=arr.size()-1;x>=0;x--)
    {
        result[x]=result[x]*prefix;
        prefix=prefix*arr[x];
    }
    return 0;
}