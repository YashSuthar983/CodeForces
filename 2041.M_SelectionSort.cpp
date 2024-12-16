#include<bits/stdc++.h>
#include<chrono>
#define ll long long
using namespace std;
using namespace std::chrono;

int alicsort(vector<int>& s, int start,int back){
  for(int i = start; i < back; ++i){
    for(int j = i + 1; j < back; ++j){
      if(s[i] > s[j]){
        int swap = s[i];
        s[i] = s[j];
        s[j] = swap;
      }
    }
  }
  return 0;
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    vector<int> s(n);
    for(auto &x:s)
    {
        cin>>x;
    }
    int indback=0;
    bool issorted=false;
    for(int x=1;x<n;x++)
    {
        if(s[x]>s[x-1])
        {
            issorted=true;
        }
        else
        {
            issorted=false;
        }
    }
    if(issorted)
    {
        cout<<0<<endl;
        return 0;
    }
    for(int x=n-1;x>=0;x--)
    {
        if(s[x]>s[x-1])
        {
            indback=x;
            break;
        }
    }
    alicsort(s,indback,n);
    indback=n-indback;
    if( indback==n)
    {
        cout<<indback*indback<<endl;
        return 0;
    }
    issorted=false;
    for(int x=1;x<n;x++)
    {
        if(s[x]>s[x-1])
        {
            issorted=true;
        }
        else
        {
            issorted=false;
        }
    }
    if(issorted)
    {
        cout<<indback*indback<<endl;
        return 0;
    }
    int indstart=0;
    for(int x=0;x<n-1;x++)
    {
        if( s[x]<s[x+1])
        {
            indstart=x+1;
            break;
        }
    }
    alicsort(s,0,indstart);
    

    cout<<(indback*indback)+(indstart*indstart)<<endl;
    return 0;
}