#include <bits/stdc++.h>
using namespace std;

int fib(int n) {
    
    if (n <= 1)
        return n;
    return fib(n - 1) + fib(n - 2);
}

int main() {
    int n = 5;
    // for(int x=1;x<20;x++)
    // {
    //     cout << fib(x)<<"    ";
    // }
    cout << fib(100);
    return 0;
}