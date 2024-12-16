#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long len;
    cin>>len;
    int c1=0,c2=0,c3=0,c4=0;
    int tt=0;
    for(int x=0;x<len;x++)
    {
        int temp;
        cin>>temp;
        if(temp==1)
        {
            c1++;
        }
        else if(temp==2)
        {
            c2++;
        }
        else if(temp==3)
        {
            c3++;
        }
        else if(temp==4)
        {
            c4++;
        }
    }
    tt=c4;
    tt+=c3;
    c1=c1-c3;
    if( c1<0)
    {
        c1=0;
    }
    tt+=c2/2;
    if(c2%2==0)
    {
        c2=0;
    }
    else
    {
        c2=1;
    }
    c1=c1+c2*2;
    if( c1%4==0)
    {
        tt+=c1/4;
    }
    else
    {
        tt+=c1/4+1;
    }
    cout<<tt<<endl;
    // int i=4;
    // int x = (sum + i - 1) / i;
    // cout<<x<<endl;
    // for( int x=1;x<=len;x++)
    // {
    //     if(sum<=x*i&&sum>i*(x-1))
    //     {
    //         cout<<x<<endl;
    //         break;
    //     }
    // }

    return 0;
}