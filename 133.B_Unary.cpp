#include<bits/stdc++.h>
#include<chrono>
#define ll long long
using namespace std;
using namespace std::chrono;
const int Mod=1000003;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin>>s;
    unordered_map<char, int> arr = {
        {'>', 1000},
        {'<', 1001},
        {'+', 1010},
        {'-', 1011},
        {'.', 1100},
        {',', 1101},
        {'[', 1110},
        {']', 1111}
    };
    string temp;
    for(char x:s)
    {
        temp+=to_string(arr[x]);
    }
    int ans=0;
    int power=1;
    for(int x=temp.size()-1;x>=0;x--)
    {
        if(temp[x]=='1')
        {
            ans+=(power)%Mod;
        }
        power=(power*2)%Mod;
    }
    cout<<(ans)%Mod<<"\n";
    
    return 0;
}