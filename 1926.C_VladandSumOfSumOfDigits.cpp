#include<bits/stdc++.h>
#include<chrono>
#define ll long long
using namespace std;
using namespace std::chrono;
const int MAX = 200'007;
const int MOD = 1'000'000'007;
 
ll res[MAX];

// ll solve(ll num)
// {
//     ll sum=0;
//     int st=1;
//     int end=9;
//     if( num<=9)
//     {
//         sum=(num)*(num+1)/2;
//         return sum;
//     }
//     else
//     {
//         sum=(end)*(end+1)/2;
//         end++;
//     }
//     num=num-9;
//     ll lt=9;
//     ll ret=num%10;
//     while(lt<num)
//     {
//         sum+=(((end)*(end+1))/2)-(((st-1)*st)/2);
//         st++;
//         end++;
//         lt+=10;
//     }
//     // if( ret>0)
//     // {
//     //     sum+=((st+ret-1)*(st+ret)/2)-(st*(st-1)/2);
//     // }
//     return sum;

// }
int sumint(ll x)
{
    int num=0;
    while( x>0)

    {
        num+=x%10;
        x/=10;
    }
    return num;
}
void solve( ll num)
{
    //vector<ll> arr(num+1,0);
    
    cout<<res[num]<<endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //ll test;
    //cin>> test;
    res[0]=0;

    auto start = high_resolution_clock::now();
    for( ll x=1;x<=MAX;x++)
    {
        res[x]=res[x-1]+sumint(x);
    }

    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    cout << duration.count() << endl;
    // while( test--)
    // {
    //     ll num ;
    //     cin>> num;
    //     solve(num);
    // }
    
    
    
    return 0;
}