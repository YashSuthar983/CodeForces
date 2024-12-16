#include<bits/stdc++.h>
#include<chrono>
#define ll long long
#define dl double
using namespace std;
using namespace std::chrono;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    dl a ,b ,c;
    cin>>a>>b>>c;
    dl d=(b*b)-(4*a*c);
    if(a==0&&b==0&&c==0)
    {
        cout<<"-1\n";
         return 0;
    }
    if(a==0&b==0)
    {
        cout<<"0\n";
        return 0;
    }
    if(a==0)
    {
        cout<<"1\n";
                cout<<fixed<<setprecision(5)<<-c/b<<"\n";
                return 0;

    }
    if(d<0)
    {
        cout<<"0\n";
        return 0;
    }
    else if(d==0)
    {
        cout<<"1\n";
        cout<<fixed<<setprecision(5)<<-(b/(2*a))<<"\n";
    }
    else
    {
        dl r1=(-b+sqrt(d))/(2*a);
        dl r2=(-b-sqrt(d))/(2*a);
        cout<<"2\n";
        if(r1<r2)
        {
            cout<<fixed<<setprecision(6)<<r1<<"\n";
            cout<<fixed<<setprecision(8)<<r2<<"\n";

        }
        else
        {
            cout<<fixed<<setprecision(8)<<r2<<"\n";
            cout<<fixed<<setprecision(6)<<r1<<"\n";

        }
    }
    return 0;
}