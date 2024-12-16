#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll test;
    cin>>test;
    while(test--)
    {
        // ll row,col;
        // cin>>row>>col;

        // //white 
        // ll wx1,wy1,wx2,wy2;
        // cin>>wx1>>wy1>>wx2>>wy2;

        // //black
        // ll bx1,by1,bx2,by2;
        // cin>>bx1>>by1>>bx2>>by2;
        
        
        ll row, col,wx1, wx2,bx1, bx2,wy1,wy2, by1,by2;
        cin >>row>>col;
        cin >> wx1 >>wy1 >> wx2 >> wy2;
        cin>>bx1>>by1>>bx2>>by2;

        //initial blocks
        ll wInitial;
        ll bInitial;


        bInitial=(row*col)/2;
        wInitial=(row*col)-bInitial;
        
        ll cw=0,cb=0;
        ll intrac=0;
        long long x1 = max(wx1, bx1), x2 = min(wx2, bx2);
        long long y1 = max(wy1, by1), y2 = min(wy2, by2);
        if(x2>=x1&&y2>=y1)
        {
            intrac= ((x2 - x1 + 1)*(y2 - y1 + 1)+(x1+y2)%2)/2;

        }
        
        // cout<<x1<<y1<<x2<<y2<<"  ------  "<<intrac<<endl;
        
        

        ll wdiff=((wx2 - wx1 + 1)*(wy2 - wy1 + 1) + (wx1 + wy2)%2)/2;

        bInitial-=wdiff;
        wInitial+=wdiff;

        ll bdiff=((bx2 - bx1 + 1)*(by2 - by1 + 1) + ((bx1 + by2)%2==0 ))/2 + intrac;


        bInitial+=bdiff;
        wInitial-=bdiff;

        cout<<wInitial<<" "<<bInitial<<endl;

    }
    return 0;
}
