#include<bits/stdc++.h>
#include<chrono>
#define ll long long
using namespace std;
using namespace std::chrono;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s1,s2;
    cin>>s1>>s2;
    int num=s1.size();
    transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
    transform(s2.begin(), s2.end(), s2.begin(), ::tolower);
    if(s1==s2)
    {
        cout<<"0\n";
    }
    else if(s1<s2)
    {
        cout<<"-1\n";
    }
    else
    {
        cout<<"1\n";
    }
    return 0;
}