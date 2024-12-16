#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int k;
    cin>>k;
    int num=k;
    int temps=0;
    while(k>0)
    {
        temps+=k%10;
        k/=10;

    }
    if(temps>10)
    {
        
    }
    int asd=10-temps;
    cout<<num<<asd<<endl;
    return 0;
}