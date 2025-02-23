#include<iostream>
using namespace std;
// //functions
// return_type __funciton name __(funciton perameter){


//     return return_type_variable;
// }
string test(const string& str)//s//str//
{
    cout<<"goheorghe"<<endl;
    if(str.length() < 2)
    {
        return str;
    }
    string Ftwo = str.substr(0,2)
        return Ftwo+Ftwo+Ftwo+Ftwo;
}

int main()
{
    string s;
    cin>>s;
    cout<<test(s)<<endl;
    return 0;
}
