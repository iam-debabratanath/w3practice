#include<iostream>
using namespace std;
string test(string s1, string s2)
{
    return s1+s2+s1+s2;
}

int main()
{
    string p,q;
    getline(cin, p);
    getline(cin, q);
    cout<<test(p,q)<<endl;
   return 0;
}
