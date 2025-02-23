#include<iostream>
using namespace std;
string test(string s,string word)
{
    
    return s.substr(0,2)+word+s.substr(2);
}

int main()
{
    string p,q;
    getline(cin, p);
    getline(cin, q);
    cout<<test(p,q)<<endl;
   return 0;
}
