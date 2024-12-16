#include<bits/stdc++.h>
#include<chrono>
#define ll long long
using namespace std;
using namespace std::chrono;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int num;
    cin>> num;
    int x=0;
    int y=0;
    int z=0;
    while( num--)
    {
        int tx,ty,tz;
        cin>>tx>>ty>>tz;
        x+=tx;
        y+=ty;
        z+=tz;
    }
    if(x==0 && y==0&&z==0)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    
    return 0;
}