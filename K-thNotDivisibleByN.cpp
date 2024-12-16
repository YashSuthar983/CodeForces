#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int ans=((k*n)/(n-1))-1;
        int rem = k%(n-1);
        if (rem > 0) {
            ans += rem + 1;
        }
        cout << ans << endl;
        
    }
    
    return 0;
}

// int i=0;
        // int x=0;
        // int count=0;
        // while (1)
        // {
        //     if(i%n!=0)
        //     {
        //         if(count>=k-1)
        //         {
        //             cout<<i<<endl;
        //             break;
        //         }
        //         count++;
                
        //     }
            
        //     i++;
        // }