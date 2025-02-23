#include<iostream>
using namespace std;
string test(string s)
{
    return s.substr(0,(s.length())/2);
}

int main()
{
    string q;
    getline(cin,q);
   cout<<test(q)<<endl;
   return 0;
}
