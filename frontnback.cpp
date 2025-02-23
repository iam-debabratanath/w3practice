#include<iostream>
using namespace std;
string test(string s)
{
    if(s.length()<3)
    {
        return s+s+s;
    }
    string f=s.substr(0,3);
    return f+s+f;

}



int main()
{
    string x;
    cin>>x;
    cout<<test(x)<<endl;
    return 0;
}
