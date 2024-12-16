#include <bits/stdc++.h>
using namespace std;
int main()
{
    int coins;
    cin >> coins;
    vector<int> arr;
    int sum=0;
    while(coins--)
    {   int temp;
        cin>>temp;
        arr.push_back(temp);
        sum+=temp;
    }
    int tempsum=0;
    int noofcoins=0;
    sort(arr.begin(),arr.end());
    reverse(arr.begin(),arr.end());
    for(int x=0; x<arr.size();x++)
    {
        noofcoins++;
        tempsum+=arr[x];
        if(tempsum>(sum-tempsum))
        {
            cout<<noofcoins;
            return 0;
        }
        
        
    }
    return 0;
}