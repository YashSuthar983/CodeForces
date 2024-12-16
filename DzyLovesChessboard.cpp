#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    vector<vector<char>> arr;
    for( int x=0;x<n;x++)
    {
        vector<char> temp(m);
        for(int y=0;y<m;y++)
        {
            cin>>temp[y];
        }
        arr.push_back(temp);
    }

    bool k=false;
    for( vector<char> l:arr)
    {
        for( int x=0;x<l.size();x++)
        {
            if(l[x]=='.')
            {
                if( !k)
                {
                    if( x%2==0)
                    {
                        l[x]='W';
                    }
                    else
                    {
                        l[x]='B';
                    }
                }
                else
                {
                    if( x%2==0)
                    {
                        l[x]='B';
                    }
                    else
                    {
                        l[x]='W';
                    }
                }
            }
            
            cout<<l[x];
            
        }
        k=!k;
        
        cout<<endl;
    }
    return 0;
}
