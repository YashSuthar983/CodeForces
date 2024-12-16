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
    cin>> test;
    while( test--)
    {
        vector<string> mat(8);
        char ans='B';
        for( int x=0;x<8;x++)
        {
            cin>>mat[x];
            if(mat[x]=="RRRRRRRR")
            {
                ans='R';
            }
        }
        cout<<ans<<endl;
        
    }
    return 0;
}