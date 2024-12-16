#include <bits/stdc++.h>
#include <chrono>
#define ll long long
using namespace std;
using namespace std::chrono;

ll solve(vector<ll>& arr) {
    ll sum = 0;
    int len = arr.size();
    for (int x = 0; x < len; x++) {
        vector<int> temp;
        for (int y = x; y <len; y++) {
            temp.push_back(arr[y]);
            sum += *min_element(temp.begin(), temp.end());

        }
    }
    return sum;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int test;
    cin >> test;
    while (test--) {
        int n, k;
        cin >> n >> k;
        vector<ll> arr;
        for (int x = 1; x <= n; x++) {
            arr.push_back(x);
        }


        map<ll, vector<vector<ll>>> feq;

       
        do {
            ll sum = solve(arr);
            if(feq[sum].size()>k)
            {
                continue;
            }
            
            feq[sum].push_back(arr); 
            if(feq.size()>1)
            {
                feq.erase(feq.begin());
            }
        } while (next_permutation(arr.begin(), arr.end()));

        if(feq.empty()) {
            cout << -1 << "\n";
            continue;
        }
        auto le = prev(feq.end());
        if((k-1)>=(le->second.size()))
        {
            cout<<-1<<"\n";
            continue;
        }
        vector<ll> ans = le->second[k - 1]; 
        if(ans.empty())
        {
            cout<<-1<<"\n";
            continue;
        }
        for (int x : ans) {
            cout << x << " ";
        }
        cout << "\n";
    }
    return 0;
}
