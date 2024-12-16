#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int n;
    cin>>s>>n;

    int len=s.length();
    vector<int> freq(len,0);
    for(int x=1;x<len;x++)
    {
        int temp;
        if( s[x]==s[x-1])
        {
            temp=1;
        }
        else
        {
            temp=0;
        }
        freq[x]=freq[x-1]+temp;
    }
    
    while(n--)
    {
        int l,r;
        cin>>l>>r;
        int count=freq[r-1]-freq[l-1];
        // while(l<r)
        // {
        //     if(s[l-1]==s[l])
        //     {
        //         count++;
        //     }
        //     l++;
        // }
        cout<<count<<endl;

    }

    return 0;
}