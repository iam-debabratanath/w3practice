#include<iostream>
using namespace std;
string test(string s)
{
    return s.substr(s.length()-2,2)+s.substr(s.length()-2,2)+s.substr(s.length()-2,2);
}
int main()
{
    string q;
    getline(cin,q);
    cout<<test(q)<<endl;
    return 0;
}
