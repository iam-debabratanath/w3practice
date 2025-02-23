#include<iostream>
using namespace std;
string test(string s)
{
    string r=" ";
    for(int i<0;i<s.length();i++)
    {
        if(i%2==0)
        r+=s[i];
    }
    return r;
}


int main()
{
    string p;
    cin>p;
   cout<<test(p)<<endl;
   return 0;
}
