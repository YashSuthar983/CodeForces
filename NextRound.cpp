#include <bits/stdc++.h>
using namespace std;
int main()
{
    int students;
    int placemark;
    cin>>students>>placemark;
    int ans=0;
    vector<int> markSheet;
    while(students--)
    {
        int temp;
        cin>>temp;
        markSheet.push_back(temp);
        
    }
    for(int x=0;x<markSheet.size();x++)
    {
        if(markSheet[x]>=markSheet[placemark-1]&&markSheet[x]>0)
        {
            ans++;
        }
    }
    cout <<ans;
    return 0;
}