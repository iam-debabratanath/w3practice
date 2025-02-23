#include <iostream>
using namespace std;
string test(string s)
{
    if (s.length() > 1 && (s.front() == 'a' || s.back() == 'a'))
    {
        s.erase(0, 1);
        s.erase(s.length() - 1, 1);
    }
    return s;
}
int main()
{
    cout << test("abcab") << endl;
    cout << test("python") << endl;
    cout << test("abcda") << endl;
    cout << test("jython") << endl;
    return 0;
}
