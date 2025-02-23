#include<iostream>
using namespace std;
string test(string str)
{
    string s=str.substr(str.length()-1);
    return s+str+s;
}

int main()
{
    string n;
    cin>>n;
    cout<<test(n)<<endl;
    return 0;
}
