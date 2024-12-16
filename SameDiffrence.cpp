#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        int len;
        cin>>len;
        vector<int> arr(len);
        for(int x=0;x<len;x++)
        {
            cin>>arr[x];
        }

        unordered_map <int,long long> map;
        long long count=0;
        for(int x=0;x<len;x++)
        {
            int diff=arr[x]-(x);
            count+=map[diff];
            map[diff]++;
        }
        cout <<count<<endl;
    }
    return 0;
}