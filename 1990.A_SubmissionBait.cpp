#include<bits/stdc++.h>
#include<chrono>
#define ll long long
using namespace std;
using namespace std::chrono;
void solve()
{
    int len;
    cin>> len;
    unordered_map<int,int> feq;
    vector<int> arr;
    for(int x=0;x<len;x++)
    {
        int temp;
        cin>>temp;
        arr.push_back(temp);
        feq[temp]++;
        
    }
    for(int x:arr)
    {
        if(feq[x]%2==1)
        {
            cout<<"YES\n";
            return ;
        }
    }
    cout<<"NO\n";
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int test;
    cin>> test;
    while(test--)
    {
        solve();
        // priority_queue<int> pq;
        // for(int x=0;x<len;x++)
        // {
        //     int temp;
        //     cin>>temp;
        //     pq.push(temp);
        // }
        // int m=0;
        // bool alice=true;
        // while(true)
        // {
        //     if(alice)
        //     {
        //         if(pq.empty())
        //         {
        //             break;
        //         }
        //         if(pq.top()>=m)
        //         {
        //             m=pq.top();
        //             pq.pop();
        //         }
        //         else
        //         {
        //             break;
        //         }
                
        //     }
        //     else
        //     {

        //         if(pq.empty())
        //         {
        //             break;
        //         }
        //         if(pq.top()>=m)
        //         {
        //             m=pq.top();
        //             pq.pop();
        //         }
        //         else
        //         {
        //             break;
        //         }
        //     }
        //     alice=!alice;
        // }
        // if(alice)
        // {
        //     cout<<"NO\n";
        // }
        // else
        // {
        //     cout<<"YES\n";
        // }
    }
    return 0;
}