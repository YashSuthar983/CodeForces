#include<bits/stdc++.h>
#include<chrono>
#define ll long long
using namespace std;
using namespace std::chrono;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int d,totaltime;
    cin>>d>>totaltime;
    int maxsum=0;
    int minsum=0;

    vector<int> maxt;
    vector<int > mint;
    for( int x=0;x<d;x++)
    {
        int mintime,maxtime;
        cin>>mintime>>maxtime;
        maxsum+=maxtime;
        minsum+=mintime;
        maxt.push_back(maxtime);
        mint.push_back(mintime);
    }
    if(minsum>totaltime||maxsum<totaltime)
    {
        cout<<"NO"<<endl;
        return 0;
    }
    vector<int> timetable=mint;
    int diff=totaltime-minsum;
    for( int x=0;x<d;x++)
    {
        if(diff!=0)
        {
            int temp=min(diff,maxt[x]-mint[x]);
            diff-=temp;
            timetable[x]+=temp;
        }
    }
    cout<<"YES"<<endl;
    for( int x:timetable)
    {
        cout<<x<<" ";
    }
    cout<<endl;
    return 0;
}
