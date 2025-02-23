#include<iostream>
using namespace std;

string test(string s)
{
    return s.substr(1,2)=="yt"?s.erase(1,2) :s;
}
int main()
{

    string a;
    cin>>a;
    cout<<test(a)<<endl;
    return 0;
}
