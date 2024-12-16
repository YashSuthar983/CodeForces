#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin>> test;
    while( test--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        
        string a;
        string b;
        bool split=false;
        //int k=-1;
        // a.push_back('1');
        // b.push_back('1');
        for(int x=0;x< n;x++)
        {

            if(s[x]=='2')
            {
                if(!split)
                {
                    a.push_back('1');
                    b.push_back('1');
                }
                else
                {
                    a.push_back('0');
                    b.push_back('2');
                }
            }
            else if(s[x]=='1')
            {
                if(!split)
                {
                    a.push_back('1');
                    b.push_back('0');
                    split = true;
                }
                else
                {
                    a.push_back('0');
                    b.push_back('1');
                }
            }
            else
            {
                a.push_back('0');
                b.push_back('0');
            }
            // if(s[x] == '2' && s[x-1] == '2')
            // {
            //     a.push_back('1');
            //     b.push_back('1');
            // }
            
            // else if(s[x]=='0')
            // {
            //     a.push_back('0');
            //     b.push_back('0');
            // }
            // else if(s[x-1]=='0'&&s[x]=='2')
            // {
            //     a.push_back('1');
            //     b.push_back('1');
            // }
            // else
            // {
            //     if( k==-1)
            //     {
            //         a.push_back('1');
            //         b.push_back('0');
            //         k++;
            //     }
            //     else
            //     {
            //         a.push_back('0');
            //         b.push_back(s[x]);
            //     }
            // }
        }

        cout<<a<<endl;
        cout<<b<<endl;
        
    }

    return 0;
}
