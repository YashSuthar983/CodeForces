#include<bits/stdc++.h>
#include<chrono>
#define ll long long
using namespace std;
using namespace std::chrono;

bool ipalin(string s)
{
    for(int x=0;x<s.size()/2;x++)
    {
        if(s[x]!=s[s.size()-x-1])
        {
            return 0;
        }
        
    }
    return 1;
}
int  makepalin(string s)
{
    for(int x=0;x<(s.size()/2);x++)
    {
        if(s[x]!=s[s.size()-x-1])
        {
            if(s[x]=='0')
            {
                return x;
            }
            else
            {
                return s.size()-x-1;
            }
           
        }
        
    }
    return s.find('0');
}

int canbepalin(string s,int x)
{
    string tem(s);
    tem[x]='1';
    return ipalin(tem);
}

int zerocount(string s)
{
    return count(s.begin(),s.end(),'0');
}

string solve(string s ,int len)
{
    int ac=0,bc=0;
    bool isalice=true;
    bool canrever=true;
    bool onlyo=true;
    if( ipalin(s))
    {
        if(zerocount(s)==1)
        {
            return "BOB";
        }
        else if(zerocount(s)%2==0)
        {
            return "BOB";
        }
        else
        {
            return "ALICE";
        }
    }
    while (zerocount(s)>0)
    {
        if(isalice)
        {
            if(s.size()%2!=0&&onlyo)
            {
                
                if(s[s.size()/2]=='0')
                {
                    string temp(s);
                    temp[s.size()/2]='1';
                    if( ipalin(temp))
                    {
                        ac++;
                        onlyo=false;
                        isalice=!isalice;
                        continue;
                    }
                    
                }
            }
            if( zerocount(s)==1&&!ipalin(s)&&canrever)
            {
                reverse(s.begin(),s.end());
                canrever=0;
            }
            else if(canbepalin(s,makepalin(s)))
            {
                s[makepalin(s)] = '1';
                canrever=1;
                ac++;
            }
            else if(!ipalin(s)&&canrever)
            {
                reverse(s.begin(),s.end());
                canrever=0;
            }
            else
            {
                s[makepalin(s)] = '1';
                canrever=1;
                ac++; 
            }
            
            cout<<s<<"  ALICE "<<endl;

        }
        else
        {
            if(!ipalin(s)&&canrever)
            {
                reverse(s.begin(),s.end());
                canrever=0;
            }
            else
            {
                s[makepalin(s)] = '1';
                canrever=1;
                bc++;
            }
            cout<<s<<"  BOB "<<endl;

            
        }
        isalice=!isalice;
    }
    cout<<ac<<" "<<bc<<endl;
    if(ac<bc)
    {
        return "ALICE";
    }
    else if(ac==bc)
    {
        return "DRAW";
    }
    else
    {
        return "BOB";
    }
    
    
}


int main()
{
    // auto start = high_resolution_clock::now();
    // auto stop = high_resolution_clock::now();
    // auto duration = duration_cast<microseconds>(stop - start);
    // cout << duration.count() << endl;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll test;
    cin>>test;
    while(test--)
    {
        ll len;
        string s;
        cin>>len>>s;
        cout<<solve(s,len)<<endl;
    }
    return 0;
}