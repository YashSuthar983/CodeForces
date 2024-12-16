#include <iostream>
#include <algorithm>
#include <vector>
#include <iomanip>
using namespace std;
int main ()
{
    long long lamps,length;
    cin >>lamps>>length;
    vector<long long > lampPoint;
    for(int x=0;x<lamps;x++)
    {
        long long temp=0;
        cin>>temp;
        lampPoint.push_back(temp);
    }
    sort(lampPoint.begin(),lampPoint.end());
    long long startgap=0,endgap=0;
    double maxgap=0;
    for (int x=1;x<lamps;x++ )
    {
        maxgap = max(maxgap*1.0,(lampPoint[x]-lampPoint[x-1])*.5);
    }

    startgap=lampPoint[0];
    endgap=length-lampPoint[lampPoint.size()-1];
    maxgap=max(maxgap,(double)startgap);
    maxgap=max((double)endgap,maxgap);
    cout <<setprecision(10) << fixed;
    cout<<maxgap;

    
    return 0;

}



