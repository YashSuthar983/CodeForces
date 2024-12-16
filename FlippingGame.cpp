#include<bits/stdc++.h>
using namespace std;
int main()
{
    int len;
    cin>>len;
    vector<int> arr;
    for(int x=0;x<len;x++)
    {
        int temp;
        cin>>temp;
        arr.push_back(temp);
    }
    int max0count=0;
    int min1count=0;
    int firstindex,lastindex;
    int i=0,j=0;
    int left=find(arr.begin(),arr.end(),0)-arr.begin();
    j=left;
    while (i<len)
    {
        if(arr[j]==0)
        {
            max0count++;
            j++;
        }
    }
    

    return 0;
}