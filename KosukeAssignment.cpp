#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        int len;
        cin>>len;
        vector<int > arr;
        for(int x=0;x<len;x++)
        {
            int temp;
            cin>>temp;
            arr.push_back(temp);
        }
        vector<int> has(len+1,0);
        for (int x=1;x<=len;x++)
        {
            has[x]=has[x-1]+arr[x-1];
        }
        int count=-1;
        for(int x:has)
        {
            if(x==0)
            {
                count++;
            }
        }
        cout<<count;
        
    }
    return 0;
}