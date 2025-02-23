#include<iostream>
using namespace std;
string test(string s,string q)
{
    return s.erase(0,1)+q.erase(q.length()-2,1);
    //return s.substr(1).substr(0,s.length()-2);
}

int main()
{
    string a;
    string b;
    getline(cin,a);
    getline(cin,b);
    cout<<test(a,b)<<endl;
    return 0;
}
