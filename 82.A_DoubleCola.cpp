#include<bits/stdc++.h>
//#include <chrono>
using namespace std;
//using namespace std::chrono;
string person(vector<string> arr,int target)
{
    int arrSize=arr.size();
    int endIndex=arrSize;
    int rounds=0;
    if(target<=endIndex)
    {
        return arr[target-1];
    }
    while(true)
    {
        rounds++;
        endIndex=endIndex+arrSize*(pow(2,rounds));
        if(target<=endIndex)
        {   
            int mm=endIndex-arrSize*(pow(2,rounds))+1;
            int ma=mm+pow(2,rounds)-1;
            int k=0;
            for(string name:arr)
            {
                if(target>=mm&&target<=ma)
                {
                    return name;
                }
                mm=ma+1;
                ma+=pow(2,rounds);
            }
        }
        
    }
}
int main()
{   
    vector<string> arr={"Sheldon", "Leonard", "Penny", "Rajesh", "Howard" };
    int target;
    cin>>target;
    //auto start = high_resolution_clock::now();

    cout<<person(arr,target)<<endl;
    //auto stop = high_resolution_clock::now();
    //auto duration = duration_cast<microseconds>(stop - start);

    //cout << "Time taken by function: "
    //     << duration.count() << " microseconds" << endl;
    return 0;
}
