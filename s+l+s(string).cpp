#include<iostream>
using namespace std;
string test(string s,string t)
{
    if(s.length()>t.length())
    {
        return s+t+s;
    }
    else if(s.length()<t.length())
    {
        return t+s+t;
    }

}
int main()
{
    string a,b;
    getline(cin,a);
    getline(cin,b);
   cout<<test(a,b)<<endl;
   return 0;
}
