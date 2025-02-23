#include<iostream>
using namespace std;
string test(string s,int n)
{
    return s.substr(0,n)+s.substr(s.length()-n);
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