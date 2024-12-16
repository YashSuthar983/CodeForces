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
        int num;
        cin>>num;
        vector<int> arr;
        if(num<5)
        {
            cout<<-1<<endl;
            continue;
        }
        for(int x=1;x<=num;x+=2)
        {
            arr.push_back(x);
        }
        swap(arr[2],arr[arr.size()-1]);
        arr.push_back(4);
        arr.push_back(2);
        for(int x=6;x<=num;x+=2)
        {
            arr.push_back(x);
        }
        for(int x:arr)
        {
            cout<<x<<" ";
        }
        cout<<endl;
    }
    return 0;
}