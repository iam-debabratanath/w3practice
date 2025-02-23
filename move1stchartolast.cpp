#include<iostream>
using namespace std;
string test(string s1)
{
    string s2 = s1;
    return s1.erase(0, 2) + s2.substr(0, 2); 
}
int main()
{
   string a,b;
   getline(cin,a);
   cout<<test(a)<<endl;
   return 0;
}
