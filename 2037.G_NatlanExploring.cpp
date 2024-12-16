#include<bits/stdc++.h>
#include<chrono>
#define ll long long
using namespace std;
using namespace std::chrono;
int main()
{
    auto start = high_resolution_clock::now();
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    cout << duration.count() << endl;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int len;
    cin>>len;
    vector<int> arr(len);
    for( int x=0;x<len;x++)
    {
        cin>>arr[x];
    }

    for(int x=0;x<len;x++)
    {
        for(int y=x+1;y<len;y++)
        {
            if( gcd(arr[x],arr[y])!=1)
            {
                
            }
        }
    }

    return 0;
}