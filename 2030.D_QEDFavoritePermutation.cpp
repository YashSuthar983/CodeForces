#include<bits/stdc++.h>
#include<chrono>
#define ll long long
using namespace std;
using namespace std::chrono;
string checkissorted(vector<ll> arr)
{
    for(int x=1;x<arr.size();x++)
    {
        if(arr[x-1]>arr[x])
        {
            return "NO";
        }
    }
    return "YES";
}

void solve(vector<ll> arr,string s)
{
    for( char x:s)
    {
        if(x=='R')
        {
            for(int x=0;x<arr.size()-1;x++)
            {
                if(arr[x]>arr[x+1])
                {
                    swap(arr[x],arr[x+1]);
                    break;
                }
            }
        }
        else
        {
            for(int x=1;x<arr.size();x++)
            {
                if(arr[x]<arr[x-1])
                {
                    swap(arr[x],arr[x-1]);
                    break;
                }
            }
        }
    }
    cout<<checkissorted(arr)<<"\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int test;
    cin>>test;
    while( test--)
    {
        int len,ch;
        cin>>len>>ch;
        vector<ll> arr(len);
        for(auto & x: arr)
        {
            cin>>x;
        }
        string s;
        cin>>s;
        while (ch--)
        {
            int ind;
            cin>>ind;
            ind--;
            string temp(s);
            if(temp[ind]=='R')
            {
                temp[ind]='L';
            }
            else
            {
                temp[ind]='R';
            }
            
            solve(arr,temp);
        }
        
    }
    return 0;
}