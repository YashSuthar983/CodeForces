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
    cin>>num;
    while(true)
    {
        num++;
        string s=to_string(num);
        int bre=0;
        unordered_map<char,int> has;
        for(char x:s)
        {
            has[x]++;
            {
                if(has[x]>1)
                {
                    bre=1;
                    break;
                }
            }
        }
        if(bre==0)
        {
            cout<<num<<endl;
            return 0;
        }
    }
                               
    return 0;
}