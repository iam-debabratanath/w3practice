#include<iostream>
using namespace std;
string test(string s1)
{
    if (s1.length()>1)
    {
    return s1.substr(0, s1.length() - 2) + s1[s1.length() - 1] + s1[s1.length() - 2];
    }
    else 
    {
        return s1;
    }
}

int main()
{
    cout << test("Hello") << endl; 
    cout << test("Python") << endl; 
    cout << test("C") << endl;  
    cout << test("PHP") << endl;     
    cout << test("JS") << endl;
   return 0;
}
