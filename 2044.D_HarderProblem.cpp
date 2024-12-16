// author: imtheonly1
// time: 2024-12-15 20:19:59
//
// Problem: D. Harder Problem
// URL: https://codeforces.com/contest/2044/problem/D
// Time Limit: 2000 ms
//
// Powered by CP Editor (https://cpeditor.org)

#include "bits/stdc++.h"
#define ll long long
#define sz(x) (int)(x).size()
#define all(x) (x).begin(), (x).end()
#define watch(x) cerr << "\n" << (#x) << " is " << (x) << endl
using namespace std;
void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> pref(n + 1);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0, l = n, x; i < n; i++) {
        if (pref[a[i]]) {
            while (pref[l]) {
                l--;
            }
            x = l;
        } else {
            x = a[i];
        }
        pref[x] = 1;
        cout << x << ' ';
    }
    cout << '\n';
}
int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc = 1;
    cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}