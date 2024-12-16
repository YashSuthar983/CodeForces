#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n1,n2;
    cin>>n1;
    vector<int> arr1;
    for(int x=0;x<n1;x++)
    {
        int temp;
        cin>>temp;
        arr1.push_back(temp);
    }
    cin>>n2;
    vector<int> arr2;
    for(int x=0;x<n2;x++)
    {
        int temp;
        cin>>temp;
        arr2.push_back(temp);
    }
    sort(arr2.begin(),arr2.end());
    sort(arr1.begin(),arr1.end());  

    int left=0;
    int i=0;
    int count =0;
    //vector<bool> visited(n2, false);

    //two pointer approch
    while(left<n1&&i<n2)
    {
        if(abs(arr1[left]-arr2[i])<=1)
        {
            i++;
            left++;
            count++;
        }
        else if(arr1[left]<arr2[i])
        {
            left++;
        }
        else
        {
            i++;
        }
    }
    
    // while(left<n1)
    // {

        


    //     // first logic
    //     // for (int i = 0; i < n2; i++) {
    //     //     if (!visited[i] && (arr1[left] == arr2[i] || arr1[left] == arr2[i] - 1 || arr1[left] == arr2[i] + 1)) {
    //     //         visited[i] = true; 
    //     //         count++;
    //     //         break; 
    //     //     }
    //     // }


    //     // for(int x=0;x<n2;x++)
    //     // {
    //     //     if(used[x]==0&&(arr1[left]==arr2[x]||
    //     //      arr1[left]==(arr2[x]-1)||
    //     //      arr1[left]==(arr2[x]+1)))
    //     //      {
    //     //         used[x]=1;
    //     //         count++;
    //     //         break;
    //     //      }
    //     // }
    //     //left++;


    //     //second logic


    //     if(i>=n2)
    //     {
    //         left++;
    //         i=0;
    //     }
    //     if(arr1[left]==arr2[i]||
    //         arr1[left]==(arr2[i]-1)||
    //         arr1[left]==(arr2[i]+1))
    //     {   
    //         arr2[i]=-2352353;
    //         count++;
    //         left++;
    //         i=0;
    //         continue;
    //     }
    //     i++;
    // }

    cout<<count<<endl;

}

