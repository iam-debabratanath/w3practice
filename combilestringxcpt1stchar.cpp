#include<iostream>
using namespace std;
string test(string s,string t)
{
    return s.substr(1)+t.substr(1);
}
int main()
{
   string a,b;
   getline(cin,a);
   getline(cin,b);
    cout<<test(a,b)<<endl;
   return 0;
}
