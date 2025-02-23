#include<iostream>
using namespace std;
string test(string str,int x)
{
    return str.erase(x,1);
}


int main()
{
    string s;
    int y;
    cin>>s;
    cin>>y;
    cout<<test(s,y)<<endl;
    return 0;
}
