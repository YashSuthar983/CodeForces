#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        int n;
        cin>>n;
        vector<int> arr(n);
        unordered_map<int,int> freq;
        int maxFreq=0;
        for( int x=0;x<n;x++)
        {
            cin>>arr[x];
            freq[arr[x]-1]++;
            maxFreq=max(maxFreq,freq[arr[x]-1]);
        }
        int uniq=freq.size();        
        if( uniq==maxFreq)
        {
            cout<<uniq-1<<endl;
        }
        else
        {
            cout<<min(uniq,maxFreq)<<endl;
        }
    }
    return 0;
}

