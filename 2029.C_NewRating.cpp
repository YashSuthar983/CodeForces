#include<bits/stdc++.h>
#include<chrono>
#define ll long long
using namespace std;
using namespace std::chrono;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int test;
    cin>>test;
    while(test--)
    {
        int len;
        cin>>len;
        vector<int> arr(len);
        for(auto&x:arr)
        {
            cin>>x;
        }

        int rating=0;
        int skip=0;
        for(int x=0;x<len-1;x++)
        {
            if(skip<0)
            {
                skip=0;
            }
            if(rating<arr[x])
            {
                if(skip>0)
                {
                    skip--;
                    continue;
                }
                else
                {
                    rating++;
                }
                
                
                
            }

            if((rating<arr[x])&&(arr[x+1]>rating))
            {
                skip++;
                rating++;
            }
            continue;
        }
        if(arr[len-1]>rating)
        {
            rating++;
        }
        if(rating==len)
        {
            rating--;
        }
        cout<<rating<<endl;
    }
    return 0;
}