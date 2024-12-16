#include<bits/stdc++.h>
#include<chrono>
#define ll long long
using namespace std;
using namespace std::chrono;

int check(ll x)
{
    int count=0;
    while(x>0)
    {
        x/=5;
        count +=x;
    }
    return count ;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int num;
    cin>>num;
    vector<int> arr;
    
    int s=0,e=1e9;
    while(s<e)
    {
        int mid=s+(e-s)/2;

        if(check(mid)<num)
        {
            s=mid+1;
        }
        else
        {
            e=mid;
        }
    }
    if(check(s)!=num)
    {
        cout<<"0\n";
        return 0;
    }
    s=s-(s%5);
    cout<<"5\n";
    for(int x=0;x<=4;x++)
    {
        cout<<s+x<<" ";
    }

    return 0;
}