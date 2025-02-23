#include<iostream>
using namespace std;
string test(string s,int n)
{
    return s.substr(n,2);
}

int main()
{
   string q;
   int p;
   getline(cin,q);
   cin>>p;
   cout<<test(q,p)<<endl;
   return 0;
}