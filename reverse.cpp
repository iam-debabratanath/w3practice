#include<iostream>
using namespace std;

string rearrageString(const string& str )
{
    if (str.length()<=1)
    {
        return str;
    }
    char Fchar=str[0];
    char Lchar=str[str.length()-1];
    string mPart=str.substr(1,str.length()-2);

    return Lchar+mPart+Fchar;
}
int main()
{
    string s;
    cin>>s;
    cout<<rearrageString(s)<<endl;
    return 0;
}
