#include <iostream>
using namespace std;
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        string word;
        cin>>word;
        if(word.size()>10)
        {
            cout<<word[0]<<word.size()-2<<word[word.size()-1];
        }
        else
        {
            cout<<word;
        }
        cout<<endl;

    }
    
}