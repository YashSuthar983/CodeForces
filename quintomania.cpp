#include <bits/stdc++.h>
using namespace std;

int main() {
    int test;
    cin >> test;
    while (test--) {
        int note;
        cin >> note;
        vector<int> arr(note);

        bool valid = true;
        for (int i = 1; i < note; i++) {
            int diff = abs(arr[i] -arr[i - 1]);
            if (diff != 5 && diff != 7) {
                cout << "NO"<<endl;
                valid =false;
                break;
            }
        }

        if (valid)
        {
            cout <<"YES"<<endl;
        }
    }
    return 0;
}
