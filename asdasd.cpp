#include <bits/stdc++.h>
using namespace std;

int main()
{
    //-----------------------------------
    int piles;
    cin >> piles;

    vector<int> bush;
    int prev = 0;
    for (int x = 0; x < piles; x++)
    {
        int temp;
        cin >> temp;
        bush.push_back(prev + temp);
        cout<<bush[x];
        prev += temp;
    }
    
    

    vector<int> fi;
    int filen;
    cin >> filen;
    for (int x = 0; x < filen; x++)
    {
        int temp;
        cin >> temp;
        fi.push_back(temp);
    }

    // Optimization using binary search
    for (int i = 0; i < filen; i++)
    {
        // Find the first bush where fi[i] <= bush[x]
        int idx = lower_bound(bush.begin(), bush.end(), fi[i]) - bush.begin();
        cout << idx + 1 << endl; // output 1-based index
    }

    return 0;
}
