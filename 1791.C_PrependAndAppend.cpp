#include<bits/stdc++.h>
#include<chrono>
#define ll long long
using namespace std;
using namespace std::chrono;
int solve (int len)
{
    int s=0;
        int e=len-1;
        string str;
        cin>>str;
        if(s==e)
            {
                return 1;
            }
        while(s<e)
        {
            if(str[s]!=str[e])
            {
                s++;
                e--;
            }
            else
            {
                return e-s+1;
            }

            if(s==e)
            {
                return 1;
            }
        }
        return 0;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int test;
    cin>>test;
    while(test--)
    {
        int len;
        cin>>len;
        cout<<solve(len)<<"\n";
    }
    return 0;
}