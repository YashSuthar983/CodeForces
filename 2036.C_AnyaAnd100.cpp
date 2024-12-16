#include<bits/stdc++.h>
#include<chrono>
#define ll long long
using namespace std;
using namespace std::chrono;

string s;
bool upocc(int ind)
{
    if(ind<0)return 0;
    if(ind>=s.size()-3)return 0;
    if(s[ind]=='1'&&s[ind+1]=='1'&&s[ind+2]=='0'&&s[ind+3]=='0')
    {
        return 1;
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
        
        cin>>s;
        int q;
        cin>>q;
        int occ=0;
        for(int x=0;x<s.size();x++)
        {   
            if(upocc(x))occ++;
        }
        while(q--)
        {
            int i;
            int k;
            cin>>i>>k;
            i--;
            if(s[i]!='0'+k)
            {
                bool bef=upocc(i-3)||upocc(i-2)||upocc(i-1)||upocc(i);
                s[i]='0'+k;
                bool aft=upocc(i-3)||upocc(i-2)||upocc(i-1)||upocc(i);
                occ+=aft-bef;
            }

            cout<<(occ ? "YES\n" : "NO\n");
        }
    }
    return 0;
}