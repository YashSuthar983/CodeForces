#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test=3;
    int ans=0;
    while (test--)
    {
        int n[3];
        int qe=0;
        for(int i=0;i<3;i++)
        {
            cin>>n[i];
            if(n[i]==1)
            {
                qe++;
            }
        }
        if(qe>=2)
        {
            ans++;
        }
    }
    cout<<ans;
    return 0;
}