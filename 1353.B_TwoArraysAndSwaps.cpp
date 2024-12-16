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
    cin>>test;
    while(test--)
    {
        int len,k;
        cin>>len>>k;
        vector<int> a(len);
        vector<int> b(len);
        for(auto&x:a)
        {
            cin>>x;
        }
        for(auto&x:b)
        {
            cin>>x;
        }
        sort(a.begin(),a.end());
        sort (b.begin(),b.end());
        int i=0;
        int e=len-1;
        while(k--&&i<len&&e>=0)
        {
            if(a[i]<b[e])
            {
                a[i]=b[e];
            }
            i++;
            e--;
        }
        cout<<accumulate(a.begin(),a.end(),0)<<"\n";
    }
    return 0;
}