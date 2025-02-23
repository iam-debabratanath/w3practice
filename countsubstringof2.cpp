#include<iostream>
using namespace std;
int test(string s)
{
    int ctr=0;
    int x=s.length()-2;
    string ltc=s.substr(x);
    for(int i=0;i<x;i++)
    {
        if(s.substr(i,2)==(ltc))
        ctr++;
    }
    return ctr;
}


int main()
{
    string f;
    cin>>f;
   cout<<test(f)<<endl;
   return 0;
}
