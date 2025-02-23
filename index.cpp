#include<iostream>
using namespace std;
string test(string s)
{
    string r=" ";
    for(int i=0;i<s.length();i+=4)
    {
        int c=i+2;
        int n=0;
        n+=c>s.length()?1:2;
        r+=s.substr(i,n);
    }
    return r;
}

int main()
{
    string q;
    cin>>q;
   cout<<test(q)<<endl;
   return 0;
}