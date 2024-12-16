#include <bits/stdc++.h>
using namespace std;
int main()
{
    string binary;
    cin>>binary;
    int count =1;
    char prev;
    for (int x=0;x<binary.size();x++)
    {
        if(binary[x]==prev)
        {
            count++;
        }
        else
        {
            count=1;
            prev=binary[x];
            
        }
        if(count>=7)
        {
            cout<<"YES";
            return 0;
        }
    }

    cout<<"NO";
    return 0;
}