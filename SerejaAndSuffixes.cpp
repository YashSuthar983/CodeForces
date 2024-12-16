#include<bits/stdc++.h>
using namespace std;
int main()
{   
    int len,terms;
    cin>>len>>terms;
    vector<int> arr(len);
    set<int> se;
    vector<int> hash(len);
    for(int x=0;x<len;x++)
    {
        cin>>arr[x];
    }
    for( int x=len-1;x>=0;x--)
    {
        se.insert(arr[x]);
        hash[x]=se.size();
    }

    
    // reverse(hash.begin(),hash.end());
    while(terms--)
    {
        int index;
        cin>>index;
        cout<<hash[index-1]<<endl;
    }
    // while(terms--)
    // {
    //     set<int> st;
    //     int index;
    //     cin>>index;
    //     for( int y=index-1;y<len;y++)
    //     {
    //         st.insert(arr[y]);
    //     }
    //     cout<<st.size()<<endl;

    // }
    return 0;
}