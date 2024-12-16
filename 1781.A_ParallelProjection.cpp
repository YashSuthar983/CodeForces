#include<bits/stdc++.h>
#include<chrono>
#define ll long long
using namespace std;
using namespace std::chrono;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int test;
    cin>>test;
    while(test--)
    {
        int w,d,h;
        cin>>w>>d>>h;
        int a,b,f,g;
        cin>>a>>b>>f>>g;
        int a1=h+b+g+abs(a-f);
        int a2=h+abs(d-b)+abs(d-g)+abs(a-f);


        int a3=h+a+f+abs(b-g);
        int a4=h+abs(w-a)+abs(w-f)+abs(b-g);
        int m1=min(a1,a2);
        int m2=min(a3,a4);
        cout<<min(m1,m2)<<"\n";
    }
    return 0;
}