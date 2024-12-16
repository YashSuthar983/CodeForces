#include <bits/stdc++.h>
using namespace std;
int main()
{
     //-----------------------------------
    int piles;
    cin>>piles;

    int prev=0;
    vector <int> bush;
    for (int x=0;x<piles;x++)
    {
        int temp;
        cin >> temp;
        bush.push_back(temp+prev);
        prev=prev+temp;
    }

    // unordered_map <int,int> bush;
    // for (int x=0;x<piles;x++)
    // {
    //     cin>>bush[x];
    // }

    // unordered_map <int,int> bush;
    // for (int x=0;x<piles;x++)
    // {
    //     cin>>bush[x];
    // }
    vector<int> fi;
    int filen;
    cin>>filen;
    for(int x=0;x<filen;x++)
    {
        int temp;
        cin>>temp;
        fi.push_back(temp);
    }

    // vector<vector<int>> contai;
    // int prev=0;
    // for (int x=0;x<piles;x++)
    // {
    //     vector<int> temp={1+prev,bush[x]+prev};
    //     contai.push_back(temp);
    //     prev=bush[x]+prev;
    // }
    // //-----------------------------------


    // int i=0;
    // while (i<filen)
    // {
    //     for (int x=1;x<bush.size();x=x+2)
    //     {
    //         if(fi[i]>=bush[x-1]&&fi[i]<=bush[x])
    //         {
    //             cout<<(x/2)+1<<endl;
    //             i++;
    //             break;
    //         }
    //         // cout<<bush[x-1]<<" "<<bush[x];
    //         // cout<<endl;
    //     }
    // }
    
    


    // int i=0;
    // int x=0;
    // while(i<fi.size())
    // {
    //     if(x>contai.size()-1)
    //     {
    //         x=0;
    //     }
    //     if(fi[i]>=contai[x][0]&&fi[i]<=contai[x][1])
    //     {
    //         cout<<x+1<<endl;
    //         i++;
    //     }
    //     x++;
    // }

    
    // int i=0;
    // while (i<filen)
    // {
        
        
    // }
    for (int i = 0; i < filen; i++)
    {
        
        int idx = lower_bound(bush.begin(), bush.end(), fi[i]) - bush.begin();
        cout << idx + 1 << endl; 
    }
    
    

}