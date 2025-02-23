#include <iostream>
using namespace std;
bool test(string s, string y)
{
    return s[0] == y[0] && s[s.length() - 1] == y[y.length() - 1];
}
int main()
{
    // string c,d;

    // string t,u;

    // cout<<"First string"<<endl;
    // while(true)
    // {
    // getline(cin,t);
    // if(t=="stop") break;
    // c+=t;
    // }

    // cout<<"Second String"<<endl;
    // while(true)
    // {
    // getline(cin,u);
    // if(u=="stop") break;
    // d+=u;
    // }
    // cout<<test(c,d)<<endl;

    cout << test("10, 20, 40, 50", "10, 20, 40, 50") << endl;

    return 0;
}
