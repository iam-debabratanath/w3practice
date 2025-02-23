#include<iostream>
using namespace std;
string test(string s)
{
    return s.length()<2?" ":s.substr(1,s.length()-2);
}

int main()
{
   string q;
   getline(cin,q);
   cout<<test(q)<<endl;
   return 0;
}
