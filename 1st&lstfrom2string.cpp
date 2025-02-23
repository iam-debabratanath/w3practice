#include<iostream>
using namespace std;
string test(string s,string t)
{
    if(s.length()>0 && t.length()>0)
    {
    return s.substr(0,1)+t.substr(t.length()-1,1);
    }
    else if(s.length()<=0 && t.length()<=0)
    {
        return (s.empty() ? "#" : s) + (t.empty() ? "#" : t);
    }
}


int main()
{
    cout << test("Hello", "Hi") << endl;
    cout << test("Python", "PHP") << endl;
    cout << test("JS", "JS") << endl;
    cout << test("Csharp", "") << endl; 
   return 0;
}
