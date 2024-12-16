#include<bits/stdc++.h>
#include<chrono>
#define ll long long
using namespace std;
using namespace std::chrono;

vector<ll> ntov(ll num,int col)
{
    vector<ll> temp;
    while( num>0)
    {
        temp.push_back(num%10);
        num/=10;
    }
    reverse(temp.begin(),temp.end());
    if(num==0)
    {
        for(int x=0;x<col;x++)
        {
            temp.push_back(0);
        }
    }
    return temp;
}

int check(string s)
{
    int occurrences = 0;
    int  pos = 0;
    string target = "1543";
    while ((pos = s.find(target, pos )) != string::npos) 
    {
        ++ occurrences;
        pos += target.length();
    }
   return occurrences;
}

int solve (vector<vector<ll>> mat,ll row,ll col)
{
    int sr=0,er=row-1;
    int sc=0,ec=col-1;
    //int times=min(row,col);
    int ans=0;
    int d=1;
    while (sr <= er && sc <= ec)
    {
        string temp="";
        if(d==1)
        {
            for(int x=sc;x<=ec;x++)
            {
                //cout<<mat[sr][x]<<" ";
                //temp.push_back(mat[sr][x]);
                temp+=to_string(mat[sr][x])+"";
            }
            sr++;
            d++;
        }
        if(d==2)
        {
            for(int x=sr;x<=er;x++)
            {
                //cout<<mat[x][ec]<<" ";
                //temp.push_back(mat[x][ec]);
                temp+=to_string(mat[x][ec])+"";
            }
            ec--;
            d++;
        }
        if(d==3)
        {
            for(int x=ec;x>=sc;x--)
            {
                //cout<<mat[er][x]<<" ";
                //temp.push_back(mat[er][x]);
                temp+=to_string(mat[er][x])+"";
            }
            er--;
            d++;
        }
        if(d==4)
        {
            for(int x=er;x>=sr;x--)
            {
                //cout<<mat[x][sc]<<" ";
                //temp.push_back((mat[x][sc]));
                temp+=to_string((mat[x][sc]))+"";
            }
            sc++;
            d=1;
        }
        
        
        temp+=temp.substr(0,3);
        //cout<<temp<<endl;
        ans+=check(temp);
        
    }
    
    return ans;
}



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll test ;
    cin>> test;
    while( test--)
    {
        ll row,col;
        cin>>row>>col;
        vector<vector<ll>> mat;
        for( int x=0;x<row;x++)
        {
            ll temp;
            cin>>temp;
            mat.push_back(ntov(temp,col));
            
        }
        cout<<solve( mat,row,col)<<endl;
    }
    return 0;
}