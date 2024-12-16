#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, m,k;
    cin >>n >>m >>k;
    vector<int> arr(m +1);
    for (int x = 0; x<= m;x++) {
        cin >> arr[x];
    }

    int friendsCount =0;
    for (int x = 0; x < m; x++) {
        int diff = 0;
        for (int y = 0; y < n; y++) {
            if (((arr[x]>>y)&1)!=((arr[m] >>y) &1)) {
                diff++;
            }
        }
        if (diff <=k) {
            friendsCount++;
        }
    }

    cout << friendsCount << endl;
    return 0;
}
