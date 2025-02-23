#include<iostream>
using namespace std;
bool test(string s)
{
    return s.substr(0,2)==s.substr(s.length()-2,2)?1:0;
}

int main()
{
    cout << test("xyzsderxy") << endl;
    cout << test("abcdef") << endl; 
    cout << test("abab") << endl; 
    
   return 0;
}