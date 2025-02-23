#include<iostream>
using namespace std;
string test(string s)
{
    string r;
    for(int i=0;i<s.length();i++)
    {
         r+=s.substr(0,i+1);
    }
    return r;
}

int main()
{
    string x;
    cin>>x;
    cout<<test(x)<<endl;
    return 0;
}
