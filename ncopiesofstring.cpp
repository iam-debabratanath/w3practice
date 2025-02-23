#include<iostream>
using namespace std;
string test(string s,int x)
{
   string result;
   
    for(int i=0;i<x;i++)
    {
        result +=s;
    }
    return result;
}



int main()
{
    string f;
    int l;
   cin>>l;
    cin>>f;
    cout<<test(f,l)<<endl;
    return 0;
}
