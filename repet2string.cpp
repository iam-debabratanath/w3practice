#include<iostream>
using namespace std;
string test(string str)
{
   
    string last_two_char = str.substr(str.length() - 2);
    int ctr = 0;

    for (int i = 0; i < str.length() - 2; i++)
    {
        if (str.substr(i, 2) == (last_two_char))
        ctr++; 
    }
    return to_string(ctr); 
}
int main()
{
    string q;
    getline(cin,q);
    cout<<test(q)<<endl; 
    return 0;
}