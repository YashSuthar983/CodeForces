#include<bits/stdc++.h>
using namespace std;
int main()
{
    int p;
    cin>>p;
    int c25=0,c50=0;
    int ph;
    for( int x=0;x<p;x++)
    {
        cin>> ph;
        if(ph==25)
        {
            c25++;
        }
        if(ph==50)
        {
            if( c25>0)
            {
                c25--;
            }
            else
            {
                cout<<"NO"<<endl;
                return 0;
            }
            c50++;
        }
        if( ph==100)
        {
            if(c50>0&&c25>0)
            {
                c25--;
                c50--;
            }
            else if( c25>=3)
            {
                c25-=3;
            }
            else
            {
                cout<<"NO"<<endl;
                return 0;
            }
        }
    }
















    // int ih=0;
    // int ph;
    // cin>>ph;
    // if(ph!=25)
    // {
    //     cout<<"NO"<<endl;
    //     return 0;
    // }
    // ih+=25;
    // for( int x=0;x<p-1;x++)
    // {
    //     cin>>ph;
    //     //cout<<ih<<endl;
    //     if(ph>25)
    //     {
    //         int diff=(ph-25);
    //         if(ih>=diff)
    //         {
    //             ih-=diff;
    //         }
    //         else
    //         {
    //             cout<<"NO"<<endl;
    //             return 0;
    //         }
            
    //     }
    //     ih+=25;
        
    // }
    cout<<"YES"<<endl;
    return 0;
}