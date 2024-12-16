#include<bits/stdc++.h>
#include<chrono>
#define ll long long
using namespace std;
using namespace std::chrono;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<int> arr(5+1);
    for( int x=0;x<4;x++)
    {
        int temp;
        cin>>temp;
        arr[temp]++;
    }
    cout<<find(arr.begin()+1,arr.end(),0)-arr.begin()<<endl;
    return 0;
}