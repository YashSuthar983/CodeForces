#include<bits/stdc++.h>
using namespace std;

int main() {
    int test;
    cin >> test;
    
    while(test--) {
        int n;
        cin >> n;
        
        int moves = 1;
        int dot=0;
        
        while(n >= abs(dot)) 
        {

            if(moves % 2 == 1) 
            {
                dot+=-abs(2*moves-1);
            }
            else
            {
                dot+=abs(2*moves-1);
            }
            if(n<abs(dot))
            {
                break;
            }
            moves++;
        }
        if(moves % 2 == 1)
        {
            cout<<"Sakurako"<<endl;
        }
        else
        {
            cout<<"Kosuke"<<endl;
        }

            
    }
    
    return 0;
}
