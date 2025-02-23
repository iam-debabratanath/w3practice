#include<iostream>
using namespace std;
string test(string s)
{
    return s.length()<2?" ":s.substr(1,s.length()-2);
}
int main()
{
   string a;
   getline(cin,a);
    cout<<test(a)<<endl;
   return 0;
}
