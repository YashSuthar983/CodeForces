#include<bits/stdc++.h>
#include<chrono>
#define ll long long
using namespace std;
using namespace std::chrono;

string solve(string s,int a ,int b)
{
    int x=0,y=0;
    while(true)
    {
        for( char str:s)
        {
            
            if(str=='N') y++;
            if(str=='S') y--;
            if(str=='E') x++;
            if(str=='W') x--;
            if(x==a&&y==b)
            {
                return "YES";
            }
            
            if((abs(x)>(20*a))||(abs(y)>(20*b)))
            {
                return "NO";
            }

        }
        if(x==0&&y==0)
        {
            return "NO";
        }
    }
    
}
int main()
{
    ios_base::sync_with_stdio(false);
    ll test;
    cin>>test;
    while(test--)
    {
        int len, a,b;
        cin>>len>>a>>b;
        string s;
        cin>>s;
        auto start = high_resolution_clock::now();
        cout<<solve(s,a,b)<<endl;
        auto stop = high_resolution_clock::now();
        auto duration = duration_cast<microseconds>(stop - start);
        cout << duration.count() << endl;
        cin.tie(NULL);
    }
    
    
    
    
    return 0;
}