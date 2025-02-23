#include<iostream>
using namespace std;
string test(string s)
{
    string ltc = s.substr(s.length() - 2, 2);
    int ctr = 0;

    for(size_t i = 0; i < s.length() - 1; i++)
    {
        if(s.substr(i, 2) == ltc)
            ctr++;
    }
    return to_string(ctr);
}

int main()
{
    string s;
    cin>>s;
    cout<<test(s)<<endl;
    return 0;
}
