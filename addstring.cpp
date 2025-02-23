#include<iostream>
using namespace std;
string  test(string s,string t)
{
    if(s.length()<t.length())
    {
        return s+t.substr(t.length()-s.length());
    }
    else if(s.length()>t.length())
    {
        return s.substr(s.length()-t.length())+t;
    }
    else 
    {
        return s+t;
    }
}

int main()
{
    cout << test("abc", "abcd") << endl;
    cout << test("Python", "Python") << endl;
    cout << test("JS", "Python") << endl;

   return 0;
}