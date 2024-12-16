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
        int num;
        cin>>num;
        
        vector<int> s1(num);
        vector<int> s2(num);
        for(auto&x:s1)
        {
            cin>>x;
        }
        for(auto&x:s2)
        {
            cin>>x;
        }
         if(s1==s2)
        {
            cout<<"Bob\n";
            continue;
        }
        reverse(s2.begin(),s2.end());
        if(s1==s2)
        {
            cout<<"Bob\n";
            
        }
        else
        {
            cout<<"Alice\n";
        }
    }
    return 0;
}