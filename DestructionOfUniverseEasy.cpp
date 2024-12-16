#include <bits/stdc++.h>
using namespace  std;

int main ()
{
    int test=1;
    //cin>>test;
    while(test--)
    {
        vector<vector<int>> set;
        int sets;
        cin>>sets;
        set.resize(sets,vector<int>(2));
        for (int x=0; x<sets;x++)
        {   
            for(int y=0;y<2;y++)
            {
                cin>>set[x][y];
            }
        }

        int subsets=(2*sets)-1;
        
    }
}

