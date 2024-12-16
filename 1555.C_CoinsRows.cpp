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
        vector<vector<int>> arr(2,vector<int>(len));
        for(int x=0;x<2;x++)
        {
            for(int y=0;y<len;y++)
            {
                cin>>arr[x][y];
            }
        }

        vector<int> sum1;
        sum1.push_back(arr[0][0]);
        for(int x=1;x<len;x++)
        {
            sum1.push_back(sum1.back()+arr[0][x]);
        }
        vector<int> sum2;
        sum2.push_back(arr[1][len-1]);
        for(int x=len-2;x>=0;x--)
        {
            sum2.push_back(sum2.back()+arr[1][x]);
        }
        reverse(sum2.begin(),sum2.end());
        int minscode=sum1[len-1]+sum2[0];
        for(int x=0;x<len;x++)
        {
            minscode=min(minscode,max(sum2[0]-sum2[x],sum1[len-1]-sum1[x]));
        }
        cout<<minscode<<"\n";
    }
    return 0;
}