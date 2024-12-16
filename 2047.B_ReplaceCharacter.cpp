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
        cin>>s;
        unordered_map<char,int> feq;
        for(int x=0;x<len;x++)
        {
            feq[s[x]]++;
        }

        vector<pair<char,int>> vec(feq.begin(),feq.end());
        sort(vec.begin(),vec.end(),[](const pair<char, int>& a, const pair<char, int>& b){
            return a.second>b.second;
        });
        char least_freq_char = vec.back().first;
        int pos = s.find(least_freq_char);
        s[pos]=vec.front().first;
        cout<<s<<"\n";
    }
    return 0;
}