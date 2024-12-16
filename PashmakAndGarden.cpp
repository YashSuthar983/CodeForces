#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x1,y1,x2,y2;
    cin>>x1>>y1>>x2>>y2;
    if(x1==x2)
    {
        int sl=abs(y2-y1);
        int x3=sl+x1;
        int y3=y1;
        int x4=sl+x1;
        int y4=y2;

        cout<<x3<<" "<<y3<<" "<<x4<<" "<<y4<<endl;

    }
    else if(y1==y2)
    {
        int sl=abs(x2-x1);
        int y3=sl+y1;
        int x3=x1;
        int y4=sl+y1;
        int x4=x2;

        cout<<x3<<" "<<y3<<" "<<x4<<" "<<y4<<endl;

    }
    else if(abs(x2-x1) == abs(y2-y1))
    {
        int y3=y2;
        int x3=x1;
        int x4=x2;
        int y4=y1;
        cout<<x3<<" "<<y3<<" "<<x4<<" "<<y4<<endl;
        
    }
    else
    {
        cout<<-1<<endl;
    }
    return 0;
}