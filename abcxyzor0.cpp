#include<iostream>
using namespace std;
string test(string s)
{
    if (s.substr(0,3)=="abc")
    {
        return "abc";
    }
    else if(s.substr(0,3)=="xyz")
    {
        return "xyz";
    }
    else 
    {
        return "";
    }

}

int main()
{
    cout << test("abc") << endl;
    cout << test("abcdef") << endl;
    cout << test("xyzsder") << endl;
    cout << test("xyz") << endl;
    cout << test("C") << endl;  
   return 0;
}