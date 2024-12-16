// //solved ~ Arpit Srivastava    
// #include <bits/stdc++.h>
// #define nline "\n"
// const long long inf = 1e18;
// #define ins insert
// #define pb push_back
// const int M = 1e9+7;
// #define ll long long
// #define lli long long int
// #define vll vector <ll>
// #define vi vector <int>
// #define vs vector <string>
// #define ld long double
// using namespace std;
// mt19937_64 RNG(chrono::steady_clock::now().time_since_epoch().count());

// //solve here

// void solve(){
// 	int n;
//     cin >> n;
//     vector<vi> arr(n, vi(n));
//     for (auto& it : arr)
//         for (int& c : it)
//             cin >> c;
//     ll total = 0;
//     for (int i = n - 1; i >= 0; --i) {
//         for (int col = n - 1; col >= 0; --col) {
//             if (arr[i][col] >= 0) continue;
//             int adj = abs(arr[i][col]);
//             total += adj;
//             for (int j = 0; j <= min(i, col); ++j) {
//                 arr[i - j][col - j] += adj;
//             }
//         }
//     }
//     cout << total << nline;
// }

// int main()
// {
//  auto begin = std::chrono::high_resolution_clock::now();
// #ifndef ONLINE_JUDGE
//     freopen("input1.txt", "r", stdin);
//     freopen("output1.txt", "w", stdout);
// #endif

//     ll t;
//     cin >> t;
//     while (t--)
//     {
//         //cout << "Case #" << i << ": ";
//         solve();
//     }
    
//     //solve();
    
//     auto end = std::chrono::high_resolution_clock::now();
//     auto elapsed = std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin);
//     cerr << "Time measured: " << elapsed.count() * 1e-9 << " seconds.\n"; 
//     return 0;

// }


#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int test ;
    cin>> test;
    while(test--)
    {
        int n;
        cin>>n;
        vector<vector<int>> matrix(n, vector<int>(n));
        for (int x = 0; x < n; x++)
        {
            for (int y = 0; y < n; y++)
            {
                cin >> matrix[x][y];
            }
        }

        int total =0;
        for( int row=n-1;row>=0;row--)
        {
            for( int col=n-1;col>=0;col--)
            {
                if(matrix[row][col]>=0)
                {
                    continue;
                }
                int ab= abs(matrix[row][col]);
                total+=ab;
                for( int y=0;y<= min(row,col);y++)
                {
                    matrix[row-y][col-y]+=ab;
                }
            }
        }
        cout<< total;
    }
}