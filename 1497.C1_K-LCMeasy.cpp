#include<bits/stdc++.h>
#include<chrono>
#define ll long long
using namespace std;
using namespace std::chrono;

int gcd(int a,int b)
{
    // while( b!=0)
    // {
    //     int temp=b;
    //     b=b%a;
    //     a=temp;
    // }
    // return a;
    if(a==0)
    {return b;}
    if(b==0)
    {return a;}

    while(a!=b)
    {
        if(a<b)
        {
            b=b-a;
        }
        else if(a>b)
        {
            a=a-b;
        }
    }
    return a;
}

int main()
{
    auto start = high_resolution_clock::now();
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    cout << duration.count() << endl;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout<<gcd(8,4);
    return 0;
}