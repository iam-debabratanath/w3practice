#include<iostream>
using namespace std;
string test(string s)
{
    if(s.length()<2)
    {
        return s;
    }
    else 
    {
       
        return s.substr(0,2);
    }
}
int main()
{
    string q;
    getline(cin,q);
    cout<<test(q)<<endl;
    return 0;
}

