#include<bits/stdc++.h>
using namespace std;

int ableToBuy(int sal,vector<int> pod)
{
    
    int count=0;
    for( int x=0;x<pod.size();x++)
    {
        if(sal>=pod[x])
        {
            count++;
        }
    }
    return count;
    
}

int main()
{
    int days;
    cin>>days;
    vector<int> pod(days);
    for(int x=0;x<days;x++)
    {
        cin>>pod[x];
    }
    int sd;
    cin>>sd;
    sort(pod.begin(),pod.end());
    while(sd--)
    {
        int sal;
        cin>>sal;
        //cout<<ableToBuy(sal,pod)<<"\n";
        int count = upper_bound(pod.begin(), pod.end(), sal) - pod.begin();
        cout << count << endl;
    }
    return 0;
}
