#include<bits/stdc++.h>
using namespace std;
int main()
{
    int len;
    cin>>len;
    vector<int > arr;
    for(int i=1;i<=len;i++)
    {
        arr.push_back(i);
    }
    int i=1;
    if(arr.size()==1)
    {
        cout<<arr[0];
        return 0;
    }
    while(arr.size()!=1)
    {
        if(arr.size()==2)
        {
            if(i==1)
            {
                cout<<arr[1];
                break;
            }
            else if (i==0)
            {
                cout<<arr[1];
                break;
            }
            
        }
        if(i<arr.size())
        {
            arr.erase(arr.begin()+i);
            i++;
            if(i>arr.size())
            {
                i=1;                        
            }
        }
        else
        {
            if(i==arr.size())
            {
                i=0;
            }
        }
        
        // for(int x:arr)
        // {
        //     cout<<x<<" ";

        // }
        // cout<<endl;
    }
    return 0;
}