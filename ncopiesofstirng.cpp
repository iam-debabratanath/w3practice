#include<iostream>
using namespace std;
string test(string s,int x)
{
    string r=" ";
    for(int i=0;i<x;i++)
    {
        r+=s;
    }
    return r;
}


int main()
{
    string q;
    cin>>q;
    int e;
    cin>>e;
    cout<<test(q,e)<<endl;
   return 0;
}
