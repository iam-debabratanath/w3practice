#include<iostream>
using namespace std;
string test(string s,int x)
{
    string r=" ";
    int fos=3;
    if(fos>s.length())
    {
        fos=s.length();
    }
    string f=s.substr(0,fos);

    for(int i=0;i<x;i++)
    {
        r+=f;
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
