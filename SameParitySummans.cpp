#include<bits/stdc++.h>
using namespace std;

int checkeven(int n,int k)
{
    int rem=n-2*k;
    if(rem<0)
    {
        return 0;
    }
    if(rem%2!=0)
    {
        return 0;
    }
    cout<<"Yes"<<endl;
    for(int i=0;i<k-1;i++)
    {
        cout<<2<<" ";
    }
    cout<<2+rem<<endl;
    return 1;

}
int checkodd(int n,int k)
{
    int rem=n-k;
    if(rem<0)
    {
        return 0;
    }
    if(rem%2!=0)
    {
        return 0;
    }
    cout<<"Yes"<<endl;
    for(int i=0;i<k-1;i++)
    {
        cout<<1<<" ";
    }
    cout<<1+rem<<endl;
    return 1;

}
int main()
{
    int test;
    cin>> test ;
    while(test--)
    {
        int num;
        cin>> num;
        int part;
        cin>>part;

        if(checkeven(num,part)||checkodd(num,part))
        {
            continue;
        }
        else
        {
            cout<<"No"<<endl;
        }
        

        

    }

    return 0;
}