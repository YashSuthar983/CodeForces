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
        int len;
        cin>>len;
        string s;
        vector<int> arr(26,0);
        for(int x=0;x<len;x++)
        {
            int tmp;
            cin>>tmp;

            for(int y=0;y<26;y++)
            {
                if(arr[y]==tmp)
                {
                    s.push_back(char('a'+y));
                    arr[y]++;
                    break;

                }
            }
        }
        cout<<s<<"\n";
        
    }
    return 0;
}